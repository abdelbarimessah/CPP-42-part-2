/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:03:07 by amessah           #+#    #+#             */
/*   Updated: 2023/08/17 00:10:49 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

struct  Data
{
    int value;
    Data(int value);
};


class Serializer
{
    private:
        Serializer();
    public:
        Serializer(const Serializer &cp);
        Serializer &operator=(const Serializer &cp);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};


#endif