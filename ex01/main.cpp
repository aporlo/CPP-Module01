#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int N = 5;

	horde = zombieHord(N, "aporlo");
	for (int i = 0; i < N; i++ )
		horde[i].announce();
	delete[] horde;

	return 0;
}
