/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:47:28 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/14 20:02:57 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point( void );
		~Point( void );
		Point( float fx, float fy );
		Point( Point const& cpy );
		Point&	operator=( Point const& cpy );

		Fixed	getx( void ) const;
		Fixed	gety( void ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif