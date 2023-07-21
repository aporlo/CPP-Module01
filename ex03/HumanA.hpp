#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:

	std::string		_name;
	Weapon&			_weapon;

public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;
	Weapon& getWeapon( void ) const;
};




#endif