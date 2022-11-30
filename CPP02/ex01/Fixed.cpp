/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:15 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/10 16:10:12 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(const int itg)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = itg << this->_dec;

	return ;
}

Fixed::Fixed(const float flt)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)(std::roundf(flt * (1 << Fixed::_dec)));

	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed	& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;

	return ;
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_dec);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << Fixed::_dec));
}

std::ostream	& operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
