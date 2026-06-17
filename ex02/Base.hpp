/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:45:29 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/17 15:13:32 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>

class Base
{
	public:
		virtual ~Base(void);
		static Base * generate(void);
		static void identify(Base* p);
		static void identify(Base& p);
};