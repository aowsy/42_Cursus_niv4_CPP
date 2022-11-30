/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:17:57 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/10 16:10:07 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:

		Fixed(void);
		Fixed(const int itg);
		Fixed(const float flt);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed	& operator=(Fixed const & rhs);

		int	getRawBits(void) const;

		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;


	private:

		int					_rawBits;
		static const int	_dec = 8;

};

std::ostream	& operator<<(std::ostream & o, Fixed const & i);


#endif
