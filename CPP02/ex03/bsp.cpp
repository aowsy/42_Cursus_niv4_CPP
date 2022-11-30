/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:54:56 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/13 11:05:53 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(Point const a, Point const b, Point const c)
{
	float	area;

	float	aX = a.getX().toFloat();
	float	bX = b.getX().toFloat();
	float	cX = c.getX().toFloat();
	float	aY = a.getY().toFloat();
	float	bY = b.getY().toFloat();
	float	cY = c.getY().toFloat();

	area = (aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)) / 2.0;

	if (area < 0)
		area *= -1;

	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	abc = area(a, b, c);
	float	xbc = area(point, b, c);
	float	axc = area(a, point, c);
	float	abx = area(a, b, point);

	if (abc != (xbc + axc + abx))
		return (false);

	if (!xbc || !axc || !abx)
		return (false);

	return (true);
}
