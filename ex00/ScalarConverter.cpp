/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:35:29 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/05 13:04:53 by atabarea         ###   ########.fr       */
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
	if (input[0] == '-')
		sign *= -1;
	for(size_t i = 0; i < len; i++)
	{
		if (input[i] >= '0' && input[i] <= '9')
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
	if (!std::isprint(std::strtod(input.c_str(), NULL)))
	{
		std::cout << "char: non displayable" << std::endl;
		return;
	}
	std::cout << "char: " << static_cast<char>(input[0]) << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	ScalarConverter::tochar(input);
	//		convert input to double
	//		if more than 127 impossible
	//		if >31 && <127 
	//			static cast to char
	//			print char
	//		else: non displayable
	// toint
	//		parse: if more than 1 char, impossible
	//		convert input to double
	//		if <INT_MIN or >INT_MAX impossible
	//			static cast to int
	//			print int
	//		
	// tofloat
	// todouble
}
