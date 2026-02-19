#include "ScalarConverter.hpp"

void    ScalarConverter::convert(std::string literal)
{
    size_t  len = literal.length();
    types   type = detect_type(literal, len);
    switch(type)
    {
        case NOTHING:
            std::cout << "Invalid input\n";
            break;
        case SPECIAL:
            print_special(literal);
            break;
        case CHAR:
            convert_char(literal, len);
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
