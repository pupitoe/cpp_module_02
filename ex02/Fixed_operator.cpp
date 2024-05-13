/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:58:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/13 15:04:48 by tlassere         ###   ########.fr       */
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
	Fixed	mul;

	mul.setRawBits((this->getRawBits() * arithmetic.getRawBits())
		>> this->_shift);
	return (mul);
}

Fixed	Fixed::operator/(Fixed const& arithmetic) const
{
	Fixed	mul;
	
	if (this->getRawBits() && arithmetic.getRawBits())
		mul.setRawBits(((this->getRawBits() << this->_shift)
			/ (arithmetic.getRawBits() << this->_shift)) << this->_shift);
	else
		mul.setRawBits(~0);
	return (mul);
}
