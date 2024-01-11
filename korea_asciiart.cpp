#include "display.h"

void display::korea_asciiart()
{
    std::string line;
    std::ifstream file("/home/aiot11/cfold/c++/asian/KFA_ASCIIART.txt");
    if(file.is_open())
    {
        while(getline(file,line))
        {
            std::cout << line << std::endl;
        }
        sleep(2);
        system("clear");
        file.close();
    }
    else
        cout << "error" << endl;
}