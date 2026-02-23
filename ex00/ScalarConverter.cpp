#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
    *this = other;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return *this;
}

void    ScalarConverter::convert(std::string literal)
{
    types   type = detect_type(literal);
    switch(type)
    {
        case NOTHING:
            std::cout << "Invalid input\n";
            break;
        case SPECIAL:
            print_special(literal);
            break;
        case CHAR:
            convert_char(literal);
            break;
        case INT:
            convert_int(literal);
            break;
        case FLOAT:
            convert_float(literal);
            break;
        case DOUBLE:
            convert_double(literal);
            break;
    }
}
