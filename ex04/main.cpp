#include "Replace.hpp"


int main(int argc, char **argv)
{
    File myfile;

    if (argc != 4)
    {
        std::cerr << RED << "Must be 3 argument >> filename, s1, s2" << RESET << std::endl;
        return (1);
    }
    if (!myfile.setFile(argv[1]))
        return (1);
    if (!myfile.replace(argv[2], argv[3]))
        return (1);
}
