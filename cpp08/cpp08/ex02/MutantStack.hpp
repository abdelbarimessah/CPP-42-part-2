# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    MutantStack(){};
    MutantStack(const MutantStack& copy){*this = copy;};
    MutantStack& operator=(const MutantStack& assign)
    {
        if (this != &assign)
            assign.c = this->c;
        return *this;
    };
    ~MutantStack(){};
    typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return (this->c.begin()); }
    iterator end() { return (this->c.end()); }
};

#endif