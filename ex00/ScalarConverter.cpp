/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:35:29 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/04 12:54:40 by atabarea         ###   ########.fr       */
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

void ScalarConverter::convert(std::string input)
{
	// std::cout << "char: " << char(input[0]) << std::endl;
	// std::cout << "int: " << int(input[0]) << std::endl;
	// std::cout << "char: impossible" << std::endl;
	// std::cout << "int: impossible" << std::endl;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] < '0' && input[i] > '9')
			break;
		if (i == input.length())
		{
			input[++i] = '.';
			input[++i] = '0';
		}
	}
	input[input.length()] = 'f';
	std::cout << "float: " << input << std::endl;
}