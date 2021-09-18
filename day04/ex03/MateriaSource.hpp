#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#define INDEX 4

class MateriaSource : public IMateriaSource {

private:

	AMateria	*_storage[INDEX];

public:

	/* Canonical */
	MateriaSource( void );
	~MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	MateriaSource	&operator=( MateriaSource const &rhs );

	/* Non canonical */
	void	learnMateria( AMateria *m );
	AMateria	*createMateria( std::string const &type );

};

#endif // __MATERIASOURCE_H__