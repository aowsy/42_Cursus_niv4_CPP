/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:39:03 by mdelforg          #+#    #+#             */
/*   Updated: 2023/04/11 11:06:03 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RPN_HPP_
# define _RPN_HPP_

# include <iostream>
# include <stack>
# include <string>
# include <sstream>
# include <cstdlib>
# include <exception>

class RPN
{

	public:

	// constructors
		RPN(const char *in);
		RPN(const RPN &src);

	// destructor
		~RPN();

	// assign operator
		RPN	&operator=(const RPN &rhs);

	// functions
		void	print();

	// exception class
		class myEx : public std::exception
		{
		  virtual const char* what() const throw()
		  {
			return "Error";
		  }
		};


	private:

	// variables
		std::stack<long int>	_rpnStk;

	// default constructor
		RPN();

	// functions
		void	_calculate(const char *str);
		int		_isNumber(std::string str);
};

#endif
