/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:02:57 by amessah           #+#    #+#             */
/*   Updated: 2023/08/17 00:08:07 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string value)
{
    this->value = value;
}

ScalarConverter::ScalarConverter(const ScalarConverter &cp)
{
    *this = cp;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &cp) 
{
    if(this != &cp)
    {
        this->value = cp.value;
        *this = cp;
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{

}


int checktype(std::string value)
{
    int index = 0;

    t_NumInfo num;
    num.dot = false;
    num.f = false;
    
    if (!std::isdigit(value[0])) {
        if (value.size() == 1) {
            return CHAR;
        } else if (value[0] == '-' || value[0] == '+') {
            if (std::isdigit(value[1])) {
                index = 1;
            } else {
                return UNKNOWN;
            }
        } else {
            return UNKNOWN;
        }
    } 
    if (std::isdigit(value[index]) || (value[0] == '-' && std::isdigit(value[1]))) {
        for (size_t i = 1; i < value.length(); ++i) {
            char c = value[i];
            if (c == '.') {
                if (num.dot) {
                    return UNKNOWN;
                }
                num.dot = true;
            } else if (i == (value.length() - 1) && c == 'f') {
                if (num.f) {
                    return UNKNOWN;
                }
                num.f = true;
            } else if (!std::isdigit(c) ){
                return UNKNOWN;
            }
        }
    }

    if (num.dot && num.f) {
        return FLOAT;
    } else if (num.dot) {
        return DOUBLE;
    } else if (!num.dot && !num.f) {
        return INT;
    }

    return UNKNOWN;
}


std::string ScalarConverter::getValue()
{
    return value;
}

void convertToChar(std::string value)
{
    std::cout << "char: " << value[0] << std::endl;
    std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(value[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(value[0]) << ".0"<< std::endl;
}


void convertToInt(std::string value)
{
    int nbr;

    std::istringstream iss(value);
    iss >> nbr;
    std::cout << "char: ";
    if(nbr < 0 || nbr > 127)
        std::cout << "impossible" << std::endl;
    if(nbr < 32 || nbr == 127)
        std::cout << "Non displayable" << std::endl;
    else 
        std::cout << static_cast<char>(nbr) << std::endl;
    std::cout << "int: " << nbr << std::endl;
    std::cout << "float: " << static_cast<float>(nbr) << ".0f"<< std::endl;
    std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
    
}

void convetToFloat(std::string value)
{
    
    float nbr;
    value = value.erase(value.size() - 1, 1);
    std::istringstream iss(value);
    iss >> nbr;
    std::cout << "char: ";
    if(nbr < 0 || nbr > 127)
        std::cout << "impossible" << std::endl;
    if(nbr < 32 || nbr == 127)
        std::cout << "Non displayable" << std::endl;
    else 
        std::cout << static_cast<char>(nbr) << std::endl;
    
    std::cout << "int: ";
    if(static_cast<int>(nbr) < INT_MIN || static_cast<int>(nbr) > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(nbr) << std::endl;
    std::cout << "float: " << nbr << "f"<< std::endl;
    std::cout << "double: " << static_cast<double>(nbr) << std::endl;
}
void convetToDouble(std::string value)
{
    
    double nbr;
    std::istringstream iss(value);
    iss >> nbr;
    std::cout << "char: ";
    if(nbr < 0 || nbr > 127)
        std::cout << "impossible" << std::endl;
    if(nbr < 32 || nbr == 127)
        std::cout << "Non displayable" << std::endl;
    else 
        std::cout << static_cast<char>(nbr) << std::endl;
    
    std::cout << "int: ";
    if(static_cast<int>(nbr) < INT_MIN || static_cast<int>(nbr) > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(nbr) << std::endl;
    std::cout << "float: " << static_cast<float>(nbr) << "f"<< std::endl;
    std::cout << "double: " << nbr << std::endl;
}

void ScalarConverter::convert(std::string value)
{
    if(checktype(value) == CHAR)
    {
        convertToChar(value);
    }
    else if(checktype(value) == INT)
    {
        convertToInt(value);
    }
    else if(checktype(value) == FLOAT)
    {   
        convetToFloat(value);
    }
    else if(checktype(value) == DOUBLE)
    {
        convetToDouble(value);
    }
    else if(checktype(value) == UNKNOWN)
    {
        if(value == "nan" || value == "-inf" || value == "+inf")
        {
            std::cout << "char: impossible" <<std::endl;
            std::cout << "int: impossible" <<std::endl;
            std::cout << "float: " << value+"f" << std::endl;
            std::cout << "double: " << value << std::endl;
        }
        else
            std::cout << "type UNKONOW please enter a valid one !" << std::endl;
    }
}