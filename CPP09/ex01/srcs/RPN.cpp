/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:50:41 by mdelforg          #+#    #+#             */
/*   Updated: 2023/08/04 11:02:06 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          CONSTRUCTORS                             */
/*                                                                  */
/* ---------------------------------------------------------------- */
// by array
RPN::RPN(const char *in)
{
	this->_calculate(in);
}

// by copy
RPN::RPN(const RPN &src)
{
	*this = src;
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          DESTRUCTOR                              */
/*                                                                  */
/* ---------------------------------------------------------------- */
RPN::~RPN()
{}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          ASSIGN OPERATOR                         */
/*                                                                  */
/* ---------------------------------------------------------------- */
RPN	&RPN::operator=(const RPN &rhs)
{
	this->_rpnStk = rhs._rpnStk;

	return (*this);
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          FUNCIONS                                */
/*                                                                  */
/* ---------------------------------------------------------------- */
// is number
int RPN::_isNumber(std::string str)
{
    char *pEnd;
	errno = 0;
    std::strtol(str.c_str(), &pEnd, 10);

    if (*pEnd != '\0' || errno == ERANGE || errno == EINVAL)
		return (0);

    return (1);
}

// calculate
void	RPN::_calculate(const char *str)
{
	std::string			token(str);
	std::stringstream	ss(token);

	while (std::getline(ss, token, ' '))
	{
		if (token.empty())
			continue ;
		else if (_isNumber(token))
		{
			char		*pEnd;
			long int	nb = std::strtol(token.c_str(), &pEnd, 10);
			if (nb < 0)
				throw myEx();
			this->_rpnStk.push(nb);
		}
		else
		{
			if (token.size() > 1 || this->_rpnStk.size() < 2)
				throw myEx();
			long int	b = this->_rpnStk.top();
			this->_rpnStk.pop();
			long int	a = this->_rpnStk.top();
			this->_rpnStk.pop();

			switch (token[0])
			{
				case '+':
					if (a + b > INT_MAX || a + b < INT_MIN)
						throw myEx();
					this->_rpnStk.push(a + b);
					break;
				case '-':
					if (a - b > INT_MAX || a - b < INT_MIN)
						throw myEx();
					this->_rpnStk.push(a - b);
					break;
				case '*':
					if (a * b > INT_MAX || a * b < INT_MIN)
						throw myEx();
					this->_rpnStk.push(a * b);
					break;
				case '/':
					if (b == 0 || a / b > INT_MAX || a / b < INT_MIN)
						throw myEx();
					this->_rpnStk.push(a / b);
					break;
				default:
					throw myEx();
					break;
			}
		}
	}
}

// print
void	RPN::print()
{
	if (this->_rpnStk.size() != 1)
		throw myEx();
	if (!this->_rpnStk.empty())
		std::cout << this->_rpnStk.top() << std::endl;
}
