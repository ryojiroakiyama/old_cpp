#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_FixBit = 8;

Fixed::Fixed() : _InternalValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=( const Fixed& src )
{
	std::cout << "Assignation operator called" << std::endl;
	_InternalValue = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _InternalValue;
}

void	Fixed::setRawBits( int const raw )
{
	_InternalValue = raw;
}
