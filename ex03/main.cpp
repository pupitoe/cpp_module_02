/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:43 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/13 18:36:15by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <cstdlib>

int main(void)
{
	bool	bsp_test;

	bsp_test = bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(5, 4));
	std::cout << "is collide t1: " << bsp_test << std::endl;

	bsp_test = bsp(Point(-10, -20), Point(10, 0), Point(0, 10), Point(5, 4));
	std::cout << "is collide t2: " << bsp_test << std::endl;

	bsp_test = bsp(Point(-10, -20), Point(10, 0), Point(0, 10), Point(0, -10));
	std::cout << "is collide t3 (point in segment): " << bsp_test << std::endl;

	bsp_test = bsp(Point(-10, -20), Point(10, 0),
		Point(0, 10), Point(-5565, 55));
	std::cout << "is collide t4: " << bsp_test << std::endl;

	bsp_test = bsp(Point(-10.65f, -20.56f), Point(1.6f, 0.2f),
		Point(-7.3f, -10.6f), Point(1.32f, -0.4f));
	std::cout << "is collide t5: " << bsp_test << std::endl;
	
	bsp_test = bsp(Point(-10.65f, -20.56f), Point(1.6f, 0.2f),
		Point(-7.3f, -10.6f), Point(1.24f, -0.32f));
	std::cout << "is collide t6: " << bsp_test << std::endl;
}
