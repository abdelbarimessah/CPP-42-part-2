/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:03:05 by amessah           #+#    #+#             */
/*   Updated: 2023/08/16 05:03:06 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &cp)
{
    (void) cp;
}

Serializer::~Serializer()
{

}

Serializer & Serializer::operator=(const Serializer &cp)
{
    (void) cp;
    return *this;
}


Data::Data(int value) : value(value)
{

}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
