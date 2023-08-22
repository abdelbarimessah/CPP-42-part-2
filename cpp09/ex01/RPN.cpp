/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:34 by amessah           #+#    #+#             */
/*   Updated: 2023/08/22 22:54:35 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN()
{
    
};

RPN::~RPN()
{
};

RPN::RPN(RPN const & cp)
{
    *this = cp;
};

RPN& RPN::operator=(RPN const & cp)
{
    if (this != &cp)
    {
        this->_stack = cp._stack;
    }
    return (*this);
};


void RPN::solveExpression(std::string expr)
{
    size_t i = 0;
    while(expr[i])
    {
        if(expr[i] == '+' || expr[i] == '-'|| expr[i] == '*' || expr[i] == '/')
        {   
            if(_stack.size() < 2)
            {
                std::cerr << "Error: invalide expression !" << std::endl;
                return ;
            }
            int nbr2 = _stack.top();
            _stack.pop();
            int nbr1 = _stack.top();
            _stack.pop();

            switch (expr[i])
            {
                case '+':
                    _stack.push(nbr1 + nbr2);
                    break;
                case '-':
                    _stack.push(nbr1 - nbr2);
                    break;
                case '*':
                    _stack.push(nbr1 * nbr2);
                    break;
                case '/':
                    if(nbr2 == 0)
                    {
                        std::cerr << "Error: Division by zero !" << std::endl;
                        return ;
                    }
                    _stack.push(nbr1 / nbr2);
                    break;
            }
        }
        else if (std::isdigit(expr[i]))
            _stack.push(expr[i] - '0');
        else if (expr[i] == ' ')
        {
            i++;
            continue;
        }
        else
        {
                std::cerr << "Error: invalide expression !" << std::endl;
                return ;
        }
        i++;
    }
    if(_stack.size() != 1)
    {
        std::cerr << "Error: invalide expression !" << std::endl;
        return ;
    }
    std::cout << _stack.top() << std::endl;
}
