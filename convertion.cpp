#include "ScalarConverter.hpp"

void	print_special(const std::string& literal)
{
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "char: impossible\n"; 
		std::cout << "int: impossible\n";
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
	}
	else if (literal == "+inf" || literal == "+inff")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: +inff\n";
		std::cout << "double: +inf\n";
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: -inff\n";
		std::cout << "double: -inf\n";
	}
}

void	convert_char(const std::string& literal, size_t& len)
{
	char	c = 0;

	if (len == 1)
		c = literal[0];
	else
		c = literal[1];
	std::cout << "char: ";
	if (isprint(c))
	{
		std::cout << "'" << c << "'\n";
		std::cout << "int: " << static_cast<int>(c) << "\n";
		std::cout << "float: " << static_cast<float>(c) << ".0f\n";
		std::cout << "double: " << static_cast<double>(c) << ".0\n";
	}
	else
		std::cout << "Non displayable\n";
}

void	convert_int(const std::string& literal)
{
    std::cout << "int\n";
	long double		number = std::strtold(literal.c_str(), NULL);

	std::cout << "char: ";
	if (number < 0 || number > 127)
		std::cout << "impossible\n";
	else
	{
		if (isprint(number))
			std::cout << "'" << static_cast<char>(number) << "'\n";
		else
			std::cout << "Non displayable\n";
	}
	std::cout << "int: ";
	if (number < MIN_INT || number > MAX_INT)
		std::cout << "impossible\n";
	else
		std::cout	<< static_cast<int>(number) << "\n";
	std::cout << "float: ";
	if (number < MIN_FLOAT || number > MAX_FLOAT)
		std::cout << "impossible\n";
	else
		std::cout << number << "\n";
	std::cout << "double: ";
	if (number < MIN_DOUBLE || number > MAX_DOUBLE)
		std::cout << "impossible\n";
	else
		std::cout << number << "\n";
}

void	convert_float(const std::string& literal)
{
    std::cout << "float\n";
	long double		f = std::strtold(literal.c_str(), NULL);

    std::cout << "char: ";
	if (f < 0 || f > 127)
		std::cout << "impossible\n";
	else
	{
		if (isprint(f))
			std::cout << "'" << static_cast<char>(f) << "'\n";
		else 
			std::cout << "Non displayable\n";
	}
	std::cout << "int: ";
	if (f < MIN_INT || f > MAX_INT)
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(f) << "\n";
	std::cout << "float: ";
	if (f < MIN_FLOAT || f > MAX_FLOAT)
		std::cout << "impossible\n";
	else
		std::cout << f << "\n";
	std::cout << "double: ";
	if (f < MIN_DOUBLE || f > MAX_DOUBLE)
		std::cout << "impossible\n";
	else
		std::cout << f << "\n";
}

void	convert_double(const std::string& literal)
{
    std::cout << "double\n";
	long double		d = std::strtold(literal.c_str(), NULL);

	std::cout << "char: ";
	if (d < 0 || d > 127)
		std::cout << "impossible\n";
	else
	{
		if (isprint(d))
			std::cout << "'" << static_cast<char>(d) << "'\n";
		else 
			std::cout << "Non displayable\n";
	}
	std::cout << "int: ";
	if (d < MIN_INT || d > MAX_INT)
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(d) << "\n";
	std::cout << "float: ";
	if (d < MIN_FLOAT || d > MAX_FLOAT)
		std::cout << "impossible\n";
	else
		std::cout << static_cast<float>(d) << 'f' << "\n";
	std::cout << "double: ";
	if (d < MIN_DOUBLE || d > MAX_DOUBLE)
		std::cout << "impossible\n";
	else
		std::cout << d << "\n";
}
