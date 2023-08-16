#include "Serializer.hpp"


int main()
{
    Data data(1231);

    uintptr_t sr = Serializer::serialize(&data);
    Data *dr = Serializer::deserialize(sr);

    std::cout << dr << std::endl;
    std::cout << &data << std::endl;

    if(dr == &data)
        std::cout << "equal" << std::endl;

    std::cout << data.value << std::endl;
    std::cout << dr->value << std::endl; 
}