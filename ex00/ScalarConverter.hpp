/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:55:10 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/11 12:07:56 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <stdexcept>
#include <iomanip>

class ScalarConverter
{
	public:
		ScalarConverter& operator=(const ScalarConverter &);
		void static convert(std::string);
		bool static checkdecimal(std::string, size_t);
		void static tochar(std::string);
		void static toint(std::string);
		void static tofloat(std::string);
		void static todouble(std::string);
		
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter&);
		~ScalarConverter(void);
		
};
