/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:51:13 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/13 10:50:10 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int		main(void){

	Point	A1(10, 7);
	Point	A2(3.5f, 3);
	Point	A3(3.5f, 12.534f);

	std::cout << "A1 class (" << A1.getX() << "," << A1.getY() << ")" << std::endl;
	std::cout << "A2 class (" << A2.getX() << "," << A2.getY() << ")" << std::endl;
	std::cout << "A3 class (" << A3.getX() << "," << A3.getY() << ")" << std::endl << std::endl;

	Point	in_triangle(5,5.26f);
	Point	out_triangle(1, 1);
	Point	on_triangle(3.5f, 3);

	std::cout << "in_triangle class (" << in_triangle.getX() << "," << in_triangle.getY() << ")" << std::endl;
	std::cout << "out_triangle class (" << out_triangle.getX() << "," << out_triangle.getY() << ")" << std::endl;
	std::cout << "on_triangle class (" << on_triangle.getX() << "," << on_triangle.getY() << ")" << std::endl << std::endl;

	bool	ret;

	ret = bsp(A1, A2, A3, in_triangle);
	std::cout << "in triangle " << ret << std::endl;
	ret = bsp(A1, A2, A3, out_triangle);
	std::cout << "out triangle " << ret << std::endl;
	ret = bsp(A1, A2, A3, on_triangle);
	std::cout << "on triangle " << ret << std::endl;

	return (0);
}
