/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:55:10 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/04 12:54:19 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter& operator=(const ScalarConverter &);
		void static convert(std::string);
		
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter&);
		~ScalarConverter(void);
		
};
