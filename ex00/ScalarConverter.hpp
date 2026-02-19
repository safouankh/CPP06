#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits>
# include <iomanip>
# include <cstdlib>
# define MIN_INT std::numeric_limits<int>::min() //-2147483648
# define MAX_INT std::numeric_limits<int>::max() //2147483647
# define MIN_FLOAT std::numeric_limits<float>::min() //-3.40282e+38
# define MAX_FLOAT std::numeric_limits<float>::max() //3.40282e+38
# define MIN_DOUBLE std::numeric_limits<double>::min() //-1.79769e+308
# define MAX_DOUBLE std::numeric_limits<double>::max() //1.79769e+308

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
    public:
        static void convert(std::string literal);
};

void	convert_int(const std::string& literal);
void	convert_float(const std::string& literal);
void	print_special(const std::string& literal);
void	convert_double(const std::string& literal);
types   detect_type(std::string literal, size_t len);
void	convert_char(const std::string& literal, size_t& len);


#endif