/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:35:29 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/16 12:46:51 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return (*this);
}

bool ScalarConverter::checkdecimal(std::string input, size_t start)
{
	if ((1 + start) == input.length())
		return(false);
	for(size_t i = (1 + start); i < input.length(); ++i)
	{
		if ((!isdigit(input[i]) && (1 + i) < input.length()) || (!isdigit(input[i]) && input[i] != 'f'))
		{
			return(false);
		}
	}
	return(true);
}

void ScalarConverter::tochar(std::string input)
{
	size_t start = input.find(".");
	if (start != std::string::npos)
	{
		if (checkdecimal(input, start) == false)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
	}
	size_t len = input.length();
	size_t end = len - start;
	if (start != std::string::npos)
		input.erase(start, end);
	len = input.length();
	int res = 0;
	int sign = 1;
	for(size_t i = 0; i < len; ++i)
	{
		if (i == 0 && input[i] == '-')
		{
			++i;
			sign *= -1;
		}
		if (isdigit(input[i]))
			res = res * 10 + (input[i] - '0');
		else if (len > 1 && !isdigit(input[i]))
		{
			std::cout << "char: impossible" << std::endl;
			return; 
		}
	}
	if (res != 0)
	{
		res *= sign;
		if (res < 0 || res > 127)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (!std::isprint(res))
		{
			std::cout << "char: non displayable" << std::endl;
			return;
		}
		std::cout << "char: " << static_cast<char>(res) << std::endl;
		return;
	}
	if (len > 1)
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	if (!std::isprint(static_cast<int>(input[0])))
	{
		std::cout << "char: non displayable" << std::endl;
		return;
	}
	std::cout << "char: " << static_cast<char>(input[0]) << std::endl;
}

void ScalarConverter::toint(std::string input)
{
	size_t start = input.find(".");
	if (start != std::string::npos)
	{
		if (checkdecimal(input, start) == false)
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}
	}
	size_t len = input.length();
	size_t end = len - start;
	if (start != std::string::npos)
		input.erase(start, end);
	len = input.length();
	unsigned long long res = 0;
	int sign = 1;
	for (size_t i = 0; i < len; ++i)
	{
		if (i == 0 && input[i] == '-' && len > 1)
		{
			++i;
			sign *= -1;
		}
		if (len > 1 && !isdigit(input[i]))
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}
		if (isdigit(input[i]))
			res = res * 10 + (static_cast<int>(input[i]) - '0');
		else
			res = static_cast<int>(input[i]);
	}
	if (res > INT_MAX)
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: ";
	if (sign == -1)
		std::cout << "-";	
	std::cout << res << std::endl;
}

void ScalarConverter::tofloat(std::string input)
{
	if (input == "nan" || input == "nanf" || input == "+inff" || input == "+inf" || input == "-inff" || input == "-inf")
	{
		if (input != "nanf" && input != "+inff" &&input != "-inff")
		input.append("f");
		std::cout << "float: " << input << std::endl;
		return;
	}
	size_t start = input.find(".");
	if (start != std::string::npos)
	{
		for (size_t i = 0; i < start; ++i)
		{
			if ((i == 0 && input[i] != '-' && !isdigit(input[i])) || !isdigit(input[i]))
			{
				std::cout << "float: impossible" << std::endl;
				return;
			}
		}
		if (checkdecimal(input, start) == false)
		{
			std::cout << "float: impossible" << std::endl;
			return;
		}
	}
	else
	{
		size_t len = input.length();
		for (size_t i = 0; i < len; ++i)
		{
			if ((i == 0 && input[i] != '-' && !isdigit(input[i])) || !isdigit(input[i]))
			{
				std::cout << "float: impossible" << std::endl;
				return;
			}
		}
	}
	double value;
	char *endptr = NULL;
	value = std::strtod(input.c_str(), &endptr);
	if (errno == ERANGE)
	{
		std::cout << "double: impossible" << std::endl;
		return;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << 'f' << std::endl;
}

void ScalarConverter::todouble(std::string input)
{
	if (input == "nan" || input == "nanf" || input == "+inff" || input == "+inf" || input == "-inff" || input == "-inf")
	{
		if (input != "nan" && input != "+inf" &&input != "-inf")
			input.erase(input.length() - 1, input.length());
		std::cout << "double: " << input << std::endl;
		return;
	}
	size_t start = input.find(".");
	if (start != std::string::npos)
	{
		for (size_t i = 0; i < start; ++i)
		{
			if ((i == 0 && input[i] != '-' && !isdigit(input[i])) || !isdigit(input[i]))
			{
				std::cout << "double: impossible" << std::endl;
				return;
			}
		}
		if (checkdecimal(input, start) == false)
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}
	}
	else
	{
		size_t len = input.length();
		for (size_t i = 0; i < len; ++i)
		{
			if ((i == 0 && input[i] != '-' && !isdigit(input[i])) || !isdigit(input[i]))
			{
				std::cout << "double: impossible" << std::endl;
				return;
			}
		}
	}
	double value;
	char *endptr = NULL;
	value = std::strtod(input.c_str(), &endptr);
	if (errno == ERANGE)
	{
		std::cout << "double: impossible" << std::endl;
		return;
	}
	std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	tochar(input);
	toint(input);
	tofloat(input);
	todouble(input);
}
