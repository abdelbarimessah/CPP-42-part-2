#include "Span.hpp"


Span::Span()
{
    N = 0;
    span.resize(N);
}

Span::Span(unsigned int N) : N(N)
{
}

Span::Span(const Span &cp)
{
    (void) cp;
}

Span &Span::operator=(const Span &cp)
{
    (void)cp;
    return *this;
}

Span::~Span()
{

}


void    Span::addNumber(int nbr)
{
    if(N == span.size())
    {
        throw std::range_error("Error: full container !");
        return ;
    }
    span.push_back(nbr);
}


int Span::shortestSpan()
{
    if(span.size() <= 1)
    {
        throw std::exception();
        return (-1);
    }
    sort(span.begin(), span.end());
    int tmp = span[1] - span[0];
    for (unsigned int i = 1; i < span.size() -1; i++)
    {
        if((span[i + 1] - span[i]) < tmp)
            tmp = span[i + 1] - span[i];
    }
    return tmp;
}

int Span::longestSpan()
{
    if(span.size() <= 1)
    {
        throw std::exception();
        return (-1);
    }
    sort(span.begin(), span.end());
    return(span[span.size() -1] - span[0]);
}


void Span::addMaxNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{

    
    
}



