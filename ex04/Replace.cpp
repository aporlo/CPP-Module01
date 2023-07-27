#include "Replace.hpp"

File::File( void ) {}
File::~File( void ) {}

bool	File::setFile( std::string newFile)
{
	std::ifstream 	inputFile(newFile.c_str());
	if (inputFile.is_open())
		inputFile.close();
	if (newFile == "")
	{
		std::cerr << "Error:The file can't be an empty string" << std::endl;
		return (false);
	}
	std::cout << "test" << newFile << std::endl;
	inputFile.open(newFile.c_str());
	this->_fileName = newFile;
	return (true);
}

bool	File::replace(std::string s1, std::string s2)
{
	// std::string	res;
	size_t	len = s1.length();
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: String can't be empty" << std::endl;
		return (false);
	}
	this->_data.assign(std::istreambuf_iterator<char>(this->inputFile), std::istreambuf_iterator<char>());
	for (size_t pos = 0; pos < this->_data.length(); pos++)
	{
		if (this->_data.compare(pos, len, s1) == 0)
		{
			this->_data.erase(pos, len);
			this->_data.insert(pos, s2);
		}
	}
	this->outputToFile(this->_data);
	// this->_writeFile.write(this->_data.c_str(), this->_data.length());
	// this->_fileName += ".replace";
	return (true);
}

void	File::outputToFile( std::string fileContent)
{
	std::string	newFileName = this->_fileName;

	std::transform(newFileName.begin(), newFileName.end(), newFileName.begin(), ::toupper);
	newFileName += ".replace";
	this->_writeFile.open(newFileName.c_str());
	std::cout << "Writing modified content to file \"" << newFileName
		<< "\"" << std::endl;
	this->_writeFile << fileContent;
}

