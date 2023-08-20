#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class Span
{
    private:
        unsigned int N;
        std::vector<int> span;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &cp);
        Span & operator=(const Span &cp);
        ~Span();

        void    addNumber(int nbr);
        int     shortestSpan();
        int     longestSpan();
        void    addMaxNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif
