/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:39 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/12 18:59:39y tlassere         ###   ########.fr       */
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
	this->setRawBits(digit << this->_shift);
	return ;
}

Fixed::Fixed( float const digit_plus )
{
	std::cout << "Float constructor called\n";
	this->setRawBits((int)roundf((digit_plus) * (1 << this->_shift)));
	return ;
}

int	Fixed::toInt( void ) const
{
	return (this->getRawBits() >> (this->_shift));
}

float	Fixed::toFloat( void ) const
{
	return (((float)this->getRawBits() / (1 << this->_shift)));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
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
	return (this->_number);
}


void	Fixed::setRawBits( int const raw )
{
	this->_number = raw;
	return ;
}

Fixed&	Fixed::operator=( Fixed const& data )
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(data.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& o, Fixed const& fix)
{
	o << fix.toFloat();
	return (o);
}
