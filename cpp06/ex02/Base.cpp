#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{
    
}

Base * generate(void)
{
    srand(time(0));
    int i = rand() % 3;
    switch (i)
    {
        case 0:
            return new A;
            break;
        case 1:
            return new B;
            break;
        case 2:
            return new C;
            break;
        default:
            return (NULL);
    }
}
void identify(Base* p)
{
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A*>(p);
    b = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);

    if(a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
	}
	catch(const std::exception& e){}
	
	try{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B\n";
	}
	catch(const std::exception& e){}
	
	try{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C\n";
	}
	catch(const std::exception& e){}

}