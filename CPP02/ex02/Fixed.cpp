/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:15 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/30 14:08:29 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*					- Constructors -				*/

// default
Fixed::Fixed(void) : _rawBits(0)
{
	return ;
}

// int
Fixed::Fixed(const int itg)
{
	this->_rawBits = itg << this->_dec;
	return ;
}

// float
Fixed::Fixed(const float flt)
{
	this->_rawBits = (int)(std::roundf(flt * (1 << Fixed::_dec)));
	return ;
}

// copy
Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return ;
}



/*					- Destructor -					*/

Fixed::~Fixed(void)
{
	return ;
}



/*					- Set operators -				*/

// assignment
Fixed	& Fixed::operator=(Fixed const & rhs)
{
	this->_rawBits = rhs.getRawBits();
	return (*this);
}



/*				- Comparison operators -			*/

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->_rawBits > rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->_rawBits < rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_rawBits >= rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_rawBits <= rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (this->_rawBits == rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_rawBits != rhs.getRawBits())
		return (1);
	return (0);
}



/*				- Arithmetic operators -			*/

Fixed	Fixed::operator+(Fixed const & rhs)
{
	this->setRawBits(this->_rawBits + rhs.getRawBits());
	return (*this);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	this->setRawBits(this->_rawBits - rhs.getRawBits());
	return (*this);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	this->setRawBits(this->_rawBits * rhs.getRawBits() >> this->_dec);
	return (*this);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	this->setRawBits(this->_rawBits / rhs.getRawBits() >> this->_dec);
	return (*this);
}



/*				- In/De-crement operators -			*/

// pre-increment
Fixed	& Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

// post-increment
Fixed	Fixed::operator++(int)
{
	Fixed	copy = *this;

	++(*this);
	return (copy);
}

// pre-decrement
Fixed	& Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

// post-decrement
Fixed	Fixed::operator--(int)
{
	Fixed	copy = *this;

	--(*this);
	return (copy);
}



/*					- Min / Max -						*/

Fixed	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed	Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed	Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

/*					- Getters -						*/

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}



/*					- Setters -						*/

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;

	return ;
}



/*				- Convert functions -				*/

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_dec);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << Fixed::_dec));
}



/*				- insert operator -					*/

std::ostream	& operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

