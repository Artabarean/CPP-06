/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:45:31 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/17 15:18:14 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void)
{
}

Base *Base::generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int num = std::rand();
	num %= 3;
	if(num == 0)
		return (new A);
	else if(num == 1)
		return (new B);
	else
		return (new C);
}

void Base::identify(Base *p)
{
	A *A_son = dynamic_cast<A*>(p);
	if (A_son != NULL)
	{
		std::cout << "The base type is A" << std::endl;
		return;
	}
	(void)A_son;
	B *B_son = dynamic_cast<B*>(p);
	if (B_son != NULL)
	{
		std::cout << "The base type is B" << std::endl;
		return;
	}
	(void)B_son;
	C *C_son = dynamic_cast<C*>(p);
	if (C_son != NULL)
	{
		std::cout << "The base type is C" << std::endl;
		return;
	}
	(void)C_son;
}

void Base::identify(Base &p)
{
	try
	{
		A &A_son = dynamic_cast<A&>(p);
		(void)A_son;
		std::cout << "The base type is A" << std::endl;
		return;
	}
	catch(std::exception& ex)
	{
		;
	}
	try
	{
		B &B_son = dynamic_cast<B&>(p);
		(void)B_son;
		std::cout << "The base type is B" << std::endl;
		return;
	}
	catch(std::exception& ex)
	{
		;
	}
	try
	{
		C &C_son = dynamic_cast<C&>(p);
		(void)C_son;
		std::cout << "The base type is C" << std::endl;
		return;
	}
	catch(std::exception& ex)
	{
		;
	}
}
