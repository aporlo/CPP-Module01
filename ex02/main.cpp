#include <string.h>
#include <iostream>

int	main(void)
{
	std::string	A = "HI THIS IS BRAIN";
	std::string	*stringPTR = &A;
	std::string	&stringREF = A;

	std::cout << "The memmory address of A : " << &A << std::endl;
	std::cout << "The memmory address held by stringPTR : " << &(*stringPTR) << std::endl;
	std::cout << "The memmory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "The value of A : " << A << std::endl;
	std::cout << "The value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF : " << stringREF << std::endl;
}
