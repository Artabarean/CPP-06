/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:33:33 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/18 10:57:38 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	Base *ptr_random = Base::generate();
	Base::identify(ptr_random);
	Base &ref_random = *ptr_random;
	Base::identify(ref_random);
	Base *ptr_random1 = Base::generate();
	Base::identify(ptr_random1);
	Base &ref_random1 = *ptr_random1;
	Base::identify(&ref_random1);
	return (0);
}