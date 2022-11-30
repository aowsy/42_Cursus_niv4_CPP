/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:17:57 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/13 09:42:32 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:

	// constructors
		Fixed(void);
		Fixed(const int itg);
		Fixed(const float flt);
		Fixed(Fixed const & src);

	// destructor
		~Fixed(void);

	// set operator
		Fixed	& operator=(Fixed const & rhs);

	// comparaison operators
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

	// arithmetic operators
		Fixed	operator+(Fixed const & rhs);
		Fixed	operator-(Fixed const & rhs);
		Fixed	operator*(Fixed const & rhs);
		Fixed	operator/(Fixed const & rhs);

	// id/de-crement operators
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

	// min/max
		static Fixed	min(Fixed & lhs, Fixed & rhs);
		static Fixed	min(Fixed const & lhs, Fixed const & rhs);
		static Fixed	max(Fixed & lhs, Fixed & rhs);
		static Fixed	max(Fixed const & lhs, Fixed const & rhs);

	// getters
		int	getRawBits(void) const;

	// setters
		void	setRawBits(int const raw);

	// convert funtions
		int		toInt(void) const;
		float	toFloat(void) const;


	private:

	// variables
		int					_rawBits;
		static const int	_dec = 8;

};

// insertion operator
std::ostream	& operator<<(std::ostream & o, Fixed const & i);


#endif
