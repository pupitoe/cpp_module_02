/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:47:34 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/14 20:15:36 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	ft_get_sign(Point const p1, Point const p2, Point const p3)
{
	Fixed	signe;

	signe = Fixed((p1.getx() - p3.getx()) * (p2.gety() - p3.gety())
		- (p2.getx() - p3.getx()) * (p1.gety() - p3.gety()));
	return (signe);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	test1;
	Fixed	test2;
	Fixed	test3;
	Fixed	AREA;
	bool	positif;
	bool	negatif;
	
	test1 = ft_get_sign(point, a, b);
	test2 = ft_get_sign(point, b, c);
	test3 = ft_get_sign(point, c, a);
	positif = (test1.toFloat() >= 0 || test2.toFloat() >= 0
		|| test3.toFloat() >= 0);
	negatif = (test1.toFloat() <= 0 || test2.toFloat() <= 0
		|| test3.toFloat() <= 0);
	std::cout << test2.toInt() << std::endl;
	std::cout << test2.toInt() << std::endl;
	std::cout << test3 << std::endl;
	std::cout << positif << std::endl;
	std::cout << negatif<< std::endl;
	return (!(negatif && positif));
}
