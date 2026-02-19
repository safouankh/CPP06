#include "ScalarConverter.hpp"

int	is_char(const std::string& literal, size_t& len)
{
	if (len == 1 && !isdigit(literal[0]))
		return 1;
	if (len == 3 && literal[0] == '\'' && literal[2] == '\'')
		return 1;
	return 0;
}

int	is_int(const std::string& literal, size_t& len)
{
	int		i = 0;
	int     flag = 0;

	if (literal[0] == '-' || literal[0] == '+')
	{
		i++;
		flag = 1;
	}
	while ((literal[i] && len > 0 && len < 12)
        || (literal[i] && !flag && len > 0 && len < 11))
	{
		if (!isdigit(literal[i]))
			return 0;
		i++;
	}
	return 1;
}

int	is_float(const std::string& literal, size_t& len, size_t& dot)
{
	for (int j = dot - 1; j >= 0; j--)
	{
		if (!isdigit(literal[j]) && j != 0)
			return 0;
		if (!isdigit(literal[j]) && j == 0
            && literal[j] != '+' && literal[j] != '-')
			return 0;
	}
	for (size_t i = dot + 1; i < len; i++)
	{
		if (!isdigit(literal[i]) && literal[i] != 'f')
			return 0;
		if (literal[i] == 'f' && i != len - 1)
			return 0;
	}
	return 1;
}

int is_special(std::string literal)
{
    if (literal == "nan" || literal == "nanf" || literal == "+inf"
        || literal == "+inff" || literal == "-inf" || literal == "-inff")
		return 1;
	return 0;
}

types   detect_type(std::string literal, size_t len)
{
    size_t  dot = literal.find('.');
    size_t  f = literal.find('f');
    if (dot == std::string::npos)
    {
        if (is_special(literal))
            return SPECIAL;
        if (is_char(literal, len))
            return CHAR;
        if (is_int(literal, len))
            return INT;
    }
    if (f != std::string::npos && dot != std::string::npos)
    {
        if (is_float(literal, len, dot))
        	return FLOAT;
    }
    else if (f == std::string::npos && dot != std::string::npos)
        return DOUBLE;
    return NOTHING;
} 
