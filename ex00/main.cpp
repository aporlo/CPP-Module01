#include "Zombie.hpp"

int main()
{
	Zombie* zombie = new Zombie("Aporlo");
	zombie->announce();
	delete zombie;

	Zombie* z = newZombie("Por");
	z->announce();
	delete z;

	randomChump("lsomrat");

	return 0;
}
