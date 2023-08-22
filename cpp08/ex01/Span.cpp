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
    *this = cp;
}

Span &Span::operator=(const Span &cp)
{
    if(this != &cp)
        this->N = cp.N;
    return *this;
}

Span::~Span()
{

}


void    Span::addNumber(int nbr)
{
    if(span.size() == N)
    {
        throw std::range_error("Error: Full container !");
        return ;
    }
    span.push_back(nbr);
}


int Span::shortestSpan()
{
    if(span.size() <= 1)
    {
        throw std::range_error("Error: Not enough numbers !");
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
        throw std::range_error("Error: Not enough numbers !");
        return (-1);
    }
    sort(span.begin(), span.end());
    return(span[span.size() -1] - span[0]);
}


void Span::addMaxNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    size_t range = std::distance(begin, end);
    if(span.size() + range > N)
        throw std::range_error("Error: Container size can't take this range of numbers !");
    span.insert(span.begin(), begin, end);
}

