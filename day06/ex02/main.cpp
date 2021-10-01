#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"

/* generate a random number between 0 and 2 */
Base	*generate( void ) {

	int	random = rand() % 3;

	if ( random == 0 )
		return ( new A );
	else if ( random == 1 )
		return ( new B );
	else if (random == 2 )
		return ( new C );
	std::cerr << "Class generation failed" << std::endl;

	return ( NULL );
}

/* cascade of encapsulated try to successively check each class type by tryng to cast it */
void	identify( Base *p ) {

	Base *tmp;
	std::cout << "Real type ";
	try
	{
		if ( (tmp = dynamic_cast<A*>(p)) != NULL )
			std::cout << "is A" << std::endl;
		else
			throw std::bad_cast();
	}
	catch( const std::bad_cast &e )
	{
		try
		{
			if ( (tmp = dynamic_cast<B*>(p)) != NULL )
				std::cout << "is B" << std::endl;
			else
				throw std::bad_cast();
		}
		catch(const std::bad_cast &e)
		{
			try
			{
				if ( (tmp = dynamic_cast<C*>(p)) != NULL )
					std::cout << "is C" << std::endl;
				else
					throw std::bad_cast();
			}
			catch(const std::bad_cast &e)
			{
				std::cout << "is not found" << std::endl;
				std::cerr << e.what() << std::endl;
			}	
		}
	}

	return ;
}

void	identify( Base &p ) {

	std::cout << "Real type ";
	try
	{
		Base &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "is A" << std::endl;
	}
	catch( const std::bad_cast &e )
	{
		try
		{
			Base &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "is B" << std::endl;
		}
		catch(const std::bad_cast &e)
		{
			try
			{
				Base &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "is C" << std::endl;
			}
			catch(const std::bad_cast &e)
			{
				std::cout << "is not found" << std::endl;
				std::cerr << e.what() << std::endl;
			}	
		}
	}

	return ;
}

int	main( void ) {

	A	a;
	B	b;
	C	c;
	std::cout << "Testing class with a pointer" << std::endl;
	identify(&a);
	identify(&b);
	identify(&c);
	std::cout << "Testing class C with a ref" << std::endl;
	identify(a);
	identify(b);
	identify(c);

	std::cout << "Testing random classes" << std::endl;
	Base	*random[10];
	for (int i = 0; i < 10; i++)
		random[i] =  generate();
	for (int i = 0; i < 10; i++)
		identify(random[i]);
	for (int i = 0; i < 10; i++)
		delete random[i];

	return ( 0 );
}