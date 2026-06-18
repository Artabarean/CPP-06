/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:17:01 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/18 10:37:07 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data ser;
	ser.number = 12432;
	ser.phrase = "reinterpreted";
	uintptr_t res = Serializer::serialize(&ser);
	std::cout << ser.number << std::endl;
	std::cout << ser.phrase << std::endl;
	Data *des;
	des = Serializer::deserialize(res);
	std::cout << des->number << std::endl;
	std::cout << des->phrase << std::endl;
	return(0);
}