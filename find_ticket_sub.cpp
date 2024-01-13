#include "header_sub.h"

void asian_cup::find_ticket()
{
    system("clear");
    std::string line;
    std::cout << "예매내역" << std::endl;
    std::ifstream ticket("ticket_sub.csv");
    if(!ticket.is_open())
        std::cout << "file open error" << std::endl;
    else
    {
        // while(getline(ticket,line));//한줄만 읽는건지 공백만 읽는건지
        //     std::cout << line << std::endl; // line이 공백임
        // for (int i = 0; i < ticket_count; i++) // 여러번 예매하면 여러번 출력해야하니깐
        // {
        //     getline(ticket,line);
        //     std::cout << line << std::endl;
        // }
    }
    sleep(2);
    system("clear");
}