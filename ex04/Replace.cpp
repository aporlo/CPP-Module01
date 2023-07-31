#include "Replace.hpp"

File::File( void ) {}
File::~File( void ) {
}

bool	File::setFile( std::string filename)
{
	this->_infile.open(filename.c_str());
	if (!this->_infile.is_open())
		this->_infile.close();
	if (filename.empty())
	{
		std::cerr << "Error:The file can't be an empty string" << std::endl;
		return (false);
	}

	this->_fileName = filename;
	return (true);
}

std::string	File::fileRead(std::ifstream &inFile)
{
	std::string str;

	inFile.seekg(0, std::ios::end);
	int size = this->_infile.tellg();
	str.resize(size);
	inFile.seekg(0, std::ios::beg);
	inFile.read(&str[0], size);
	return(str);
}

bool	File::replace(std::string s1, std::string s2)
{

	std::string	newFileName = this->_fileName;
	size_t	len = s1.length();
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: String can't be empty" << std::endl;
		return (false);
	}
	this->_data = fileRead(this->_infile);
	for (size_t pos = 0; pos < this->_data.length(); pos++)
	{
		if (this->_data.compare(pos, len, s1) == 0)
		{
			this->_data.erase(pos, len);
			this->_data.insert(pos, s2);
		}
	}

	std::cout << "length>>" << this->_data.length() << std::endl;
	newFileName += ".replace";
	this->_outfile.open(newFileName.c_str());
	this->_outfile.write(this->_data.c_str(), this->_data.length());
	this->_outfile.close();
	this->_infile.close();
	return (true);
}


