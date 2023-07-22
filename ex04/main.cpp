#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
    ofstream myfile (argv[1]);
    if (myfile.is_open())
    {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
    
}