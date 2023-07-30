#ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <string>
#include <fstream>

# define RED		"\033[0;31m"
# define BLUE		"\033[0;34m"
# define CYAN		"\033[0;36m"
# define RESET		"\033[0m"

class File
{
private:

	std::string		_fileName;
	std::string		s1;
	std::string		s2;
	std::ifstream	_infile;
	std::string		_data;
	std::ofstream	_outfile;

public:

	File( void );
	~File( void );
	bool	setFile(std::string newFile);
	bool	replace(std::string s1, std::string s2);
	void	outputToFile( std::string fileContent );
	std::string	fileRead(std::ifstream &infile);
};

#endif
