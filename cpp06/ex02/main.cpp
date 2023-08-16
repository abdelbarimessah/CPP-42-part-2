#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

int main ()
{
    Base *abdelbari;

    abdelbari = generate();

    identify(abdelbari);
    identify(*abdelbari);
}