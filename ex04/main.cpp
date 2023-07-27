#include <iostream>
#include <fstream>
#include "Replace.hpp"


int main(int argc, char **argv)
{
    File myfile;
    std::string newFile;

    newFile = argv[1];

    if (argc != 4)
    {
        std::cerr << RED << "Must be 3 argument >> filename, s1, s2" << RESET << std::endl;
        return (1);
    }
    if (!myfile.setFile(newFile))
    {
        std::cerr << RED << "Error" << RESET << std::endl;
        return (1);
    }
    if (!myfile.replace(argv[2], argv[3]))
    {
        std::cerr << RED << "Error" << RESET << std::endl;
        return (1);
    }

}
