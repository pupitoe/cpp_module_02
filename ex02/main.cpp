/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:43 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/13 15:56:37 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	float	va = -1000000000000.0f;
	float	vb = -189.8f;
	Fixed a(va);
	Fixed const b(vb);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a.toInt() << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << a / b << std::endl;
	std::cout << va / vb << std::endl;

}
