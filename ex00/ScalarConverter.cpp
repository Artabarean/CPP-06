/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:35:29 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/05 15:10:56 by atabarea         ###   ########.fr       */
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

void ScalarConverter::tochar(std::string input)
{
	size_t len = input.length();
	int res = 0;
	int sign = 1;
	for(size_t i = 0; i < len; i++)
	{
		if (i == 0 && input[i] == '-')
		{
			++i;
			sign *= -1;
		}
		if (isdigit(input[i]))
			res = res * 10 + (input[i] - '0');
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
	if (input.length() > 1)
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
	size_t len = input.length();
	unsigned long long res= 0;
	int sign = 1;
	for (size_t i = 0; i < len; i++)
	{
		if (i == 0 && input[i] == '-' && len > 1)
		{
			++i;
			sign *= -1;
		}
		if (len > 1 && isalpha(input[i]))
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

void ScalarConverter::convert(std::string input)
{
	ScalarConverter::tochar(input);
	ScalarConverter::toint(input);
	//		parse: if more than 1 char, impossible
	//		convert input to double
	//		if <INT_MIN or >INT_MAX impossible
	//			static cast to int
	//			print int
	//		
	// tofloat
	// todouble
}
