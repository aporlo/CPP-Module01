#include "Zombie.hpp"

Zombie* zombieHord( int N, std::string name )
{
	Zombie* zombieHord = new Zombie[N];

	for (int i = 0; i < N ; i++)
		zombieHord[i].setName(name);
	return (zombieHord);
}
