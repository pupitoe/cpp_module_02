/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:43 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/10 17:44:03 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	//{
	//	Fixed a;
	//	Fixed b( a );
	//	Fixed c;
	//	c = b;
	//	std::cout << a.getRawBits() << std::endl;
	//	std::cout << b.getRawBits() << std::endl;
	//	std::cout << c.getRawBits() << std::endl;
	//}
	{
		Fixed	a;
		
		a.setRawBits(72);
		std::cout << "a:" << a.getRawBits() << "\n\n";
		
		Fixed	b( a );
		std::cout << "b:" << b.getRawBits() << "\n\n";
		b.setRawBits(12);
		std::cout << "b:" << b.getRawBits() << "\n\n";
		std::cout << "a:" << a.getRawBits() << "\n\n";

		Fixed	c;
		c = b;
		std::cout << "c:" << c.getRawBits() << "\n\n";
		c.setRawBits(42);
		std::cout << "c:" << c.getRawBits() << "\n\n";
		std::cout << "b:" << b.getRawBits() << "\n\n";
		std::cout << "a:" << a.getRawBits() << "\n\n";
	}
	return (0);
}
