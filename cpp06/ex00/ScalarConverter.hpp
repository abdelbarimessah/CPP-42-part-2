#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    private:
        std::string value;
    public:
        ScalarConverter();
        ScalarConverter(std::string value);
        ScalarConverter(const ScalarConverter &cs)
        ~ScalarConverter();
};


#endif