/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:01:30 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/15 17:34:14 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONVERT_HPP_
# define _CONVERT_HPP_

# include <iostream>

class Convert
{

	public:

	// constructors
		Convert();
		Convert(std::string str);
		Convert(const Convert & src);

	// destructor
		~Convert();

	// assign operator
		Convert	& operator=(const Convert & rhs);

	// getters
		char	getChar() const;
		int		getInt() const;
		float	getFloat() const;
		double	getDouble() const;

	// exceptions
		class WrongInput : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Wrong input.");
				}
		};
		class Undisplayable : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Non displayable");
				}
		};
		class Impossible : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("impossible");
				}
		};


	private:

		char	_ch;
		int		_in;
		float	_fl;
		double	_db;

		int		_type;

};

std::ostream	& operator<<(std::ostream & o, const Convert & rhs);

#endif
