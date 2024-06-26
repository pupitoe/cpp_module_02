/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/13 13:56:44by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		static const int	_shift = 8;
		int					_number;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed& operator=( Fixed const& data );
		Fixed( Fixed const& data );

		Fixed( int const digit );
		Fixed( float const digit_plus );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	
		static Fixed	min(Fixed& a, Fixed& b);
		static Fixed	max(Fixed& a, Fixed& b);
		static Fixed	min(Fixed const& a, Fixed const& b);
		static Fixed	max(Fixed const& a, Fixed const& b);

		int	operator<(Fixed const& cmp) const;
		int	operator>(Fixed const& cmp) const;
		int	operator<=(Fixed const& cmp) const;
		int	operator>=(Fixed const& cmp) const;
		int	operator==(Fixed const& cmp) const;
		int	operator!=(Fixed const& cmp) const;

		Fixed	operator+(Fixed const& arithmetic) const;
		Fixed	operator-(Fixed const& arithmetic) const;
		Fixed	operator/(Fixed const& arithmetic) const;
		Fixed	operator*(Fixed const& arithmetic) const;

		Fixed&	operator++( void );
		Fixed	operator++(int);
		Fixed&	operator--( void );
		Fixed	operator--(int);
};

std::ostream& operator<<(std::ostream& o, Fixed const& fix);

#endif
