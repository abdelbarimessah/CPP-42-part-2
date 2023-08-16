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
