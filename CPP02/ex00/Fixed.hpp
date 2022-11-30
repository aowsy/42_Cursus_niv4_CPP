/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:38:43 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/10 14:43:29 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


class Fixed
{

	public:

		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed	& operator=(Fixed const & rhs);

		int	getRawBits(void) const;

		void	setRawBits(int const raw);


	private:

		int					_rawBits;
		static const int	_dec = 8;

};


#endif
