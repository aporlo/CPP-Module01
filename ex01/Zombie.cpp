#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{

}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " die." << std::endl;
}
