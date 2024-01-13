#include "header_sub.h"
void asian_cup::korea_asciiart()
{
    std::string line;
    std::ifstream file("KFA_ASCIIART.txt");
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