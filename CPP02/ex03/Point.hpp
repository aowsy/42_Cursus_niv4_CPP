/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:38:44 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/13 11:05:21 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{

	public:

	// constructor
		Point(void);
		Point(const float x, const float y);
		Point(const Point &src);

	// destructor
		~Point(void);

	// assign operator
		Point	& operator=(const Point & rhs);

	// getters
		Fixed	getX(void) const;
		Fixed	getY(void) const;


	private:

		Fixed	_x;
		Fixed	_y;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
