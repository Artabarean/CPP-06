/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:55:10 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/05 12:55:11 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <stdexcept>

class ScalarConverter
{
	public:
		ScalarConverter& operator=(const ScalarConverter &);
		void static convert(std::string);
		void static tochar(std::string);
		void static toint(std::string);
		void static tofloat(std::string);
		void static todouble(std::string);
		
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter&);
		~ScalarConverter(void);
		
};
