/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:47:34 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/16 18:27:13 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	ft_get_sign(Point const p1, Point const p2, Point const p3)
{
	Fixed	signe;

	signe = Fixed((p1.getx() - p3.getx()) * (p2.gety() - p3.gety())
		- (p2.getx() - p3.getx()) * (p1.gety() - p3.gety()));
	return (signe);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	a_b_segment;
	Fixed	b_c_segment;
	Fixed	c_a_segment;
	bool	positif;
	bool	negatif;
	
	a_b_segment = ft_get_sign(point, a, b);
	b_c_segment = ft_get_sign(point, b, c);
	c_a_segment = ft_get_sign(point, c, a);
	positif = (a_b_segment >= 0 || b_c_segment >= 0 || c_a_segment >= 0);
	negatif = (a_b_segment <= 0 || b_c_segment <= 0 || c_a_segment <= 0);
	// Value of segment
	//std::cout << "A B: " << a_b_segment.toInt() << std::endl;
	//std::cout << "B C: " << b_c_segment.toInt() << std::endl;
	//std::cout << "C A: " << c_a_segment.toInt() << std::endl;
	//std::cout << positif << std::endl;
	//std::cout << negatif<< std::endl;
	return (!(negatif && positif));
}
