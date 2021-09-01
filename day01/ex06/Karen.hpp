#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>
#include <string>

#define DEBUG 359
#define INFO 300
#define WARNING 534
#define ERROR 394

class Karen {

public:

	Karen( void );
	~Karen( void );
	void	complain( std::string level );
	void	letsHearKaren(int level, void (Karen::*action[])( void ));

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif // __KAREN_H__