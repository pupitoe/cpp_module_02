/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:43 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/12 16:41:20 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	//Fixed a;
	//Fixed const b( 10 );
	//Fixed const c( 42.42f );
	//Fixed const d( b );
	//a = Fixed( 1234.4321f );
	//std::cout << "a is " << a << std::endl;
	//std::cout << "b is " << b << std::endl;
	//std::cout << "c is " << c << std::endl;
	//std::cout << "d is " << d << std::endl;
	//std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	//std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	//std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	//std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	//Fixed	a(-15620);
	
	//std::cout << "val: " << a.toInt() << std::endl;
	std::cout << "int : ";
	for (int i = sizeof(int) * 8 - 1; i != -1; i--)
	{
		if (-1 & 1 << i)
			std::cout << "1";
		else
			std::cout << "0";
	}
	std::cout << std::endl;
	std::cout << "float: ";
	float		a = 0.42f;
	unsigned	b = *(unsigned *)&a;
	for (int i = sizeof(float) * 8 - 1; i != -1; i--)
	{
		if (b & 1 << i)
			std::cout << "1";
		else
			std::cout << "0";
	}
	std::cout << std::endl;
	std::cout << (float)*(float *)&b << std::endl;
}
