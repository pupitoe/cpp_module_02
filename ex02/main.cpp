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

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	float	test_a;
	float	test_b;
	Fixed	fa;
	Fixed	fb;
	
	test_a	= 69.65;
	test_b	= 42.268;
	fa = test_a;
	fb = test_b;
	std::cout << "Fa: " << fa << std::endl;
	std::cout << "Fb: " << fb << std::endl;
	if (fa < fb)
		std::cout << "fa <\n";
	else
		std::cout << "fb <\n";
	if (fa > fb)
		std::cout << "fa >\n";
	else
		std::cout << "fb >\n";
	if (fa == fb)
		std::cout << "fa == fb\n";
	else
		std::cout << "fa != fb\n";
	if (fa != fb)
		std::cout << "fa != fb\n";
	else
		std::cout << "fa == fb\n";
	std::cout << "Fix: " << fa + fb << std::endl;
	std::cout << "float: " << test_a + test_b << std::endl;
	std::cout << "Fix: " << fa - fb << std::endl;
	std::cout << "float: " << test_a - test_b << std::endl;
	std::cout << "Fix: " << fa * fb << std::endl;
	std::cout << "float: " << test_a * test_b << std::endl;
	std::cout << "Fix: " << fa / fb << std::endl;
	std::cout << "float: " << test_a / test_b << std::endl;
	std::cout << "Max: " << Fixed::max(fa, fb) << std::endl;
	std::cout << "Min: " << Fixed::min(fa, fb) << std::endl;
}