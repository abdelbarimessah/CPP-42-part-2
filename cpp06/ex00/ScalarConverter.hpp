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
    public:
        ScalarConverter();
        ScalarConverter(std::string value);
        ScalarConverter(const ScalarConverter &cp);
        ScalarConverter &operator=(const ScalarConverter &cp);
        ~ScalarConverter();
        std::string getValue();
        void convert(std::string value);
};


#endif