#include <iostream>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <string.h>
// #include "header_sub.h"
using namespace std;
void find_ticket()
{
    system("clear");
    int ticket_count = 4;
    std::string line;
    std::cout << "예매내역" << std::endl;
    std::ifstream ticket("ticket_sub.csv");
    if(!ticket.is_open())
        std::cout << "file open error" << std::endl;
    else
    {
        for (int i = 0; i < ticket_count; i++)
        {
            getline(ticket,line);
            std::cout << line << std::endl;
        }    
    }
    sleep(2);
    system("clear");
}

int main()
{
    find_ticket();
    return 0;
}