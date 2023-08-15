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
        *this = cp;
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
    } else if (std::isdigit(value[index]) || (value[0] == '-' && std::isdigit(value[1]))) {
        for (size_t i = 0; i < value.length(); ++i) {
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
            } else if (!std::isdigit(c) && c != '-') {
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

void ScalarConverter::convert(std::string value)
{
    if(checktype(value) == CHAR)
    {
        std::cout << "char" << std::endl;
    }
    else if(checktype(value) == INT)
    {
        std::cout << "int" << std::endl;
    }
    else if(checktype(value) == FLOAT)
    {   
        std::cout << "float" << std::endl;
    }
    else if(checktype(value) == DOUBLE)
    {
        std::cout << "double" << std::endl;
    }
    else
        std::cout << "unkonow" << std::endl;

}