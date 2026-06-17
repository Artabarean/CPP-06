/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:33:33 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/17 15:08:02 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	Base *ptr_random = Base::generate();
	Base::identify(ptr_random);
	Base &ref_random = *ptr_random;
	Base::identify(ref_random);
	return (0);
}