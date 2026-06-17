/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:45:29 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/17 14:23:25 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Base
{
	public:
		Base(void);
		virtual ~Base(void);
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};