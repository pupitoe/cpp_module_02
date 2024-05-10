/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/10 18:04:56 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		float	toInt( void ) const;
};

std::iostream& operator<<(std::iostream& o, Fixed const& fix);

#endif
