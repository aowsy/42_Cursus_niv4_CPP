/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:52:09 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/13 10:53:47 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*						- Constructors -					*/

// default
Point::Point(void) : _x(0), _y(0)
{
	return ;
}

// floats
Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return ;
}

// copy
Point::Point(const Point &src)
{
	*this = src;
	return ;
}



/*						- Assign operator-					*/

Point	& Point::operator=(const Point & rhs)
{
	this->_x = rhs.getX();
	this->_y = rhs.getY();

	return (*this);
}



/*						- Destructor -						*/

Point::~Point(void)
{
	return ;
}



/*						- Getters -							*/

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}
