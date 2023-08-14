#include "ScalarConverter.hpp"


int main(int argc , char *argv[])
{
    if(argc != 2)
    {
        std::cout << "invalid number of argument !" << std::endl;
    }
    else
    {
        ScalarConverter cs(argv[1]);
        cs.convert(cs.getValue());
    }
}