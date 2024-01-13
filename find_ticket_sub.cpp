#include "header_sub.h"

void asian_cup::find_ticket()
{
    system("clear");
    std::cout << "예매내역" << std::endl;
    std::ifstream ticket("ticket_sub.csv");
    if(!ticket.is_open())
        std::cout << "file open error" << std::endl;
    else
    {
        std::string line;
        while(getline(ticket,line));
            std::cout << line << std::endl;
    }
    sleep(2);
    system("clear");
}