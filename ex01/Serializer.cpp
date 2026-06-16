/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 11:31:27 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/16 11:37:20 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
}

Serializer::Serializer(const Serializer& other)
{
	*this = other;
}

Serializer::~Serializer(void)
{
}

Serializer& Serializer::operator=(const Serializer& other)
{
	(void)other;
	return (*this);
}

uintptr_t Serializer::serialize(Data* structure)
{
	uintptr_t address = reinterpret_cast<uintptr_t>(structure);
	return  (address);
}

Data* Serializer::deserialize(uintptr_t dataptr)
{
	Data* ptr = reinterpret_cast<Data*>(dataptr);
	return (ptr);
}
