/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:47:26 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/14 20:04:34 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): x(0), y(0)
{
	return ;
}

Point::Point( float const fx, float const fy ): x(fx), y(fy)
{
	return ;
}

Point::~Point( void )
{
	return ;
}

Point::Point( Point const& val ): x(val.getx()), y(val.gety())
{
	std::cout << "call ing" << std::endl;
	(void)val;
	return ;
}

Point& Point::operator=( Point const& cpy )
{
	(void)cpy;
	return (*this);
}

Fixed	Point::getx( void ) const
{
	return (this->x);
}

Fixed	Point::gety( void ) const
{
	return (this->y);
}


