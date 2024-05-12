/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:39 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/12 14:12:44 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _number(0U)
{
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::Fixed( int const digit )
{
	std::cout << "Int constructor called\n";
	this->_number = digit << this->_shift;
	return ;
}

int	Fixed::toInt( void ) const
{
	return (this->_number >> this->_shift);
}

Fixed::~Fixed( void )
{
	std::cout <<"Destructor called\n";
	return ;
}

Fixed::Fixed( Fixed const& data )
{
	std::cout << "Copy constructor called\n";
	*this = data;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_number);
}


void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->_number = raw;
	return ;
}

Fixed&	Fixed::operator=( Fixed const& data )
{
	std::cout << "Copy assignment operator called\n";
	this->_number = data.getRawBits();
	return (*this);
}
