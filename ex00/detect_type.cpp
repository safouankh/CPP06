#include "ScalarConverter.hpp"

int	is_char(std::string literal)
{
	if (literal.length() == 1 && !isdigit(literal[0]))
		return 1;
	if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
		return 1;
	return 0;
}

int	is_int(std::string literal)
{
	int		i = 0;
	int     flag = 0;

	if (literal[0] == '-' || literal[0] == '+')
	{
		i++;
		flag = 1;
	}
	while ((literal[i])
        || (literal[i] && !flag))
	{
		if (!isdigit(literal[i]))
			return 0;
		i++;
	}
	return 1;
}

int	is_float(std::string literal, int dot)
{
	int len = literal.length();
	for (int j = dot - 1; j >= 0; j--)
	{
		if (!isdigit(literal[j]) && j != 0)
			return 0;
		if (!isdigit(literal[j]) && j == 0
            && literal[j] != '+' && literal[j] != '-')
			return 0;
	}
	for (int i = dot + 1; i < len; i++)
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

int	is_double(std::string literal, int dot)
{
	int len = literal.length();
	for (int j = dot - 1; j >= 0; j--)
	{
		if (!isdigit(literal[j]) && j != 0)
			return 0;
		if (!isdigit(literal[j]) && j == 0
            && literal[j] != '+' && literal[j] != '-')
			return 0;
	}
	for (int i = dot + 1; i < len; i++)
	{
		if (!isdigit(literal[i]) && literal[i] != 'f')
			return 0;
	}
	return 1;
}

types   detect_type(std::string literal)
{
    size_t	dot = literal.find('.');
    size_t	f = literal.find('f');
    
	if (dot == std::string::npos)
    {
        if (is_special(literal))
            return SPECIAL;
        if (is_char(literal))
            return CHAR;
        if (is_int(literal))
            return INT;
    }
    if (f != std::string::npos && dot != std::string::npos)
    {
        if (is_float(literal, dot))
        	return FLOAT;
    }
    else if (f == std::string::npos && dot != std::string::npos)
	{
		if (is_double(literal, dot))
        	return DOUBLE;
	}
    return NOTHING;
} 
