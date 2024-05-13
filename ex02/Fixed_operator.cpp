/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:58:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/13 18:14:23 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Comparison operators

int	Fixed::operator<(Fixed const& cmp) const
{
	return (this->getRawBits() < cmp.getRawBits());
}

int	Fixed::operator>(Fixed const& cmp) const
{
	return (this->getRawBits() > cmp.getRawBits());
}

int	Fixed::operator<=(Fixed const& cmp) const
{
	return (this->getRawBits() <= cmp.getRawBits());
}

int	Fixed::operator>=(Fixed const& cmp) const
{
	return (this->getRawBits() >= cmp.getRawBits());
}

int	Fixed::operator==(Fixed const& cmp) const
{
	return (this->getRawBits() == cmp.getRawBits());
}

int	Fixed::operator!=(Fixed const& cmp) const
{
	return (this->getRawBits() != cmp.getRawBits());
}

// arithmetic operator

Fixed	Fixed::operator+(Fixed const& arithmetic) const
{
	Fixed	add;
	
	add.setRawBits(this->getRawBits() + arithmetic.getRawBits());
	return (add);
}

Fixed	Fixed::operator-(Fixed const& arithmetic) const
{
	Fixed	sub;
	
	sub.setRawBits(this->getRawBits() - arithmetic.getRawBits());
	return (sub);
}

Fixed	Fixed::operator*(Fixed const& arithmetic) const
{
	Fixed		mul;
	long int	tmp;
	
	tmp = static_cast<long int>(static_cast<long int>(this->getRawBits())
		* static_cast<long int>(arithmetic.getRawBits())) >> this->_shift;
	mul.setRawBits(tmp);
	return (mul);
}

Fixed	Fixed::operator/(Fixed const& arithmetic) const
{
	Fixed		frac;
	long int	tmp;
	
	if (this->getRawBits() && arithmetic.getRawBits())
	{
		tmp = static_cast<long int>(static_cast<long int>(this->getRawBits())
			<< this->_shift) / (static_cast<long int>(arithmetic.getRawBits()));
		frac.setRawBits(tmp);
	}
	else
		frac.setRawBits(0);
	return (frac);
}

Fixed&	Fixed::operator--( void )
{
	int bits;
	
	bits = this->getRawBits();
	bits--;
	this->setRawBits(bits);
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed	buffer(*this);

	--*this;
	return (buffer);
}

Fixed&	Fixed::operator++( void )
{
	int bits;
	
	bits = this->getRawBits();
	bits++;
	this->setRawBits(bits);
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed	buffer(*this);

	++*this;
	return (buffer);
}
