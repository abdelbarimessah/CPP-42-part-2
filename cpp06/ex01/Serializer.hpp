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

    public:
        Serializer();
        Serializer(const Serializer &cp);
        Serializer &operator=(const Serializer &cp);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};


#endif