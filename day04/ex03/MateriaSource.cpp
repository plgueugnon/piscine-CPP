#include "MateriaSource.hpp"

/* Canonical */
MateriaSource::MateriaSource( void ) {

	std::cout << "Default MateriaSource constructor called" << std::endl;
	for(int i = 0; i < INDEX; i++)
		_storage[i] = NULL;

	return ;
}

MateriaSource::~MateriaSource( void ) {

	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < INDEX; i++)
		if ( _storage[i] )
		{
			delete _storage[i];
			_storage[i] = NULL;
		}

	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {

	*this = src;

	return ;
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs ) {

	(void)rhs;

	return ( *this );
}

/* Non canonical */
void	MateriaSource::learnMateria( AMateria *m ) {

	for( int i = 0; i < INDEX; i++ )
		if ( _storage[i] != m && _storage[i] == NULL )
		{
			_storage[i] = m;
			// std::cout << "DEBUG " << _storage[i]->getType() << " as been stored !" << std::endl;
			return ;
		}
	std::cout << "Source is full" << std::endl;

	return ;
}

AMateria	*MateriaSource::createMateria( std::string const &type ) {

	for ( int i = 0; i < INDEX; i++ )
		if ( _storage[i] && type == _storage[i]->getType() )
			return ( _storage[i]->clone() );

	return ( 0 );
}