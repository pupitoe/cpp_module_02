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

int main( int argc, char **a )
{
	(void)argc;
	std::cout << bsp(Point(0, 0), Point(15, 16), Point(0, 16), Point(std::strtol(a[1], NULL, 10), std::strtol(a[2], NULL, 10)));
	std::cout << "\n";
}