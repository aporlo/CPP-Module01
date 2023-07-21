#include "HumanB.hpp"


HumanB::HumanB( std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack( void ) const
{
	if (this->_weapon != NULL && !this->_weapon->getType().empty())
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& newWeapon )
{
	this->_weapon = &newWeapon;
}

