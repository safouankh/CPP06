#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <limits>

# define MIN_INT std::numeric_limits<int>::lowest()
# define MAX_INT std::numeric_limits<int>::max()
# define MIN_FLOAT std::numeric_limits<float>::lowest()
# define MAX_FLOAT std::numeric_limits<float>::max()
# define MIN_DOUBLE std::numeric_limits<double>::lowest()
# define MAX_DOUBLE std::numeric_limits<double>::max()

enum types
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    SPECIAL,
    NOTHING
};

class ScalarConverter
{
    private:
        ScalarConverter(void){};
        ScalarConverter(ScalarConverter const &other);
        ScalarConverter &operator=(ScalarConverter const &other);
        ~ScalarConverter(void){};
    public:
        static void convert(std::string literal);
};

void	convert_int(std::string literal);
void	convert_float(std::string literal);
void	print_special(std::string literal);
void	convert_double(std::string literal);
types   detect_type(std::string literal);
void	convert_char(std::string literal);

#endif