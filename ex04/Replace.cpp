#include "Replace.hpp"

File::File( void ) {}
File::~File( void ) {}

bool	File::setFile( std::string newFile)
{
	// std::ifstream 	inputFile(newFile.c_str());
	if (this->_infile.is_open())
		this->_infile.close();
	if (newFile == "")
	{
		std::cerr << "Error:The file can't be an empty string" << std::endl;
		return (false);
	}
	std::cout << "test>>" << newFile << std::endl;
	this->_infile.open(newFile.c_str());
	this->_fileName = newFile;
	std::cout << this->_infile << std::endl;
	std::cout << this->_fileName << std::endl;
	return (true);
}

std::string	File::fileRead(std::ifstream &inFile)
{
	std::string str;
	inFile.seekg(1, std::ios::end);
	int size = this->_infile.tellg();
	str.resize(size);
	inFile.seekg(0, std::ios::beg);
	inFile.read(&str[0], size);
	std::cout << "str::" << str << std::endl;
	return(str);
}

bool	File::replace(std::string s1, std::string s2)
{
	// std::string	res;
	std::string	newFileName = this->_fileName;
	size_t	len = s1.length();
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: String can't be empty" << std::endl;
		return (false);
	}
	this->_data = fileRead(this->_infile);
	// this->_data.seekg(1, std::ios::end);
	// int size = this._data.tellg();

	// this->_data.assign(std::istreambuf_iterator<char>(this->_infile), std::istreambuf_iterator<char>());
	for (size_t pos = 0; pos < this->_data.length(); pos++)
	{
		if (this->_data.compare(pos, len, s1) == 0)
		{
			std::cout << "s1s2>>" << s1 << s2 << std::endl;
			this->_data.erase(pos, len);
			this->_data.insert(pos, s2);
			std::cout << "data>>" << this->_data << std::endl;

		}
	}
	this->_outfile.write(this->_data.c_str(), this->_data.length());
	newFileName += ".replace";
	this->_outfile.open(newFileName);
	std::cout << "Writing modified content to file \"" << newFileName
		<< "\"" << std::endl;
	this->_outfile << this->_data;
	return (true);
}

// void	File::outputToFile( std::string fileContent)
// {
// 	std::string	newFileName = this->_fileName;

// 	// std::transform(newFileName.begin(), newFileName.end(), newFileName.begin(), ::toupper);
// 	newFileName += ".replace";
// 	std::cout << newFileName << std::endl;
// 	this->_writeFile.open(newFileName.c_str());
// 	std::cout << "Writing modified content to file \"" << newFileName
// 		<< "\"" << std::endl;
// 	this->_writeFile << fileContent;
// }

