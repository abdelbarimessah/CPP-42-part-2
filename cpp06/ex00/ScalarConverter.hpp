/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:02:59 by amessah           #+#    #+#             */
/*   Updated: 2023/08/17 00:12:27 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

enum ValueType {
    INT,
    DOUBLE,
    FLOAT,
    CHAR,
    UNKNOWN
};

typedef struct s_NumInfo {
    bool dot ;
    bool f ;
}t_NumInfo;

class ScalarConverter
{
    private:
        std::string value;
        ScalarConverter();
    public:
        ScalarConverter(std::string value);
        ScalarConverter(const ScalarConverter &cp);
        ScalarConverter &operator=(const ScalarConverter &cp);
        ~ScalarConverter();
        std::string getValue();
        static void convert(std::string value);
};


#endif