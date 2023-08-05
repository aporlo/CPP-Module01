#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:

	Zombie( std::string name = "default" );
	~Zombie( void );

	void	announce( void );
	void	setName( std::string name );


private:

	std::string		_name;
};

Zombie* zombieHord( int N, std::string name );

#endif
