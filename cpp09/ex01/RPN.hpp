/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:36 by amessah           #+#    #+#             */
/*   Updated: 2023/08/22 22:54:37 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>


class RPN {
    private:
        std::stack<int> _stack;
    public:
        RPN();
        RPN(const RPN &cp);
        RPN &operator=(const RPN &cp);
        ~RPN();
        void solveExpression(std::string expr);
};


#endif