#include "span.hpp"

/* Canonical */
Span::Span( void ) : _size(0) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Span::~Span( void ) {

	return ;
}

Span::Span( Span const &rhs ) {

	*this = rhs;

	return ;
}

Span	&Span::operator=( Span const &rhs ) {

	if ( this != &rhs )
	{
		_size = rhs._size;
		std::copy(rhs._v.begin(), rhs._v.end(), _v.begin());
		// for(std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++ )
		// 	_v.push_back(rhs._v.)
	}

	return ( *this );
}

/* Non canonical */
Span::Span( unsigned int size ) : _size(size)  {

	return ;
}

void	Span::addNumber( int n ) {

	if ( _v.size() == _size )
		throw SizeLimitReached(_size);
	else
		_v.push_back(n);
	
	return ;
}

unsigned int	Span::shortestSpan( void ) const {

	if ( _v.size() <= 1 )
		throw NothingToFind();
	else
	{
		std::vector<int>	tmp = _v;
		std::sort(tmp.begin(), tmp.end());
		return ( tmp[1] - tmp[0] );
	}
}

unsigned int	Span::longestSpan( void ) const {

	if ( _v.size() <= 1 )
		throw NothingToFind();
	else
	{
		int f = *std::min_element(_v.begin(), _v.end());
		int s = *std::max_element(_v.begin(), _v.end());
		return ( s - f );
	}
}

unsigned int	Span::getSize( void ) const {

	return ( _size );
}

std::vector<int>	Span::getVector( void ) const {

	return ( _v );
}

const char	*NothingToFind::what( void ) const throw() {

	return ( "Error: no span to find - add at least two numbers" );
}

const char	*SizeLimitReached::what( void ) const throw() {

	static std::string	errMsg = "Error: Max size reached - limit = " + std::to_string(_maxSize);

	return ( errMsg.c_str() );
}