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
        std::cout << "ID를 입력해주세요.\nID:_____\b\b\b\b\b";
        std::string user_id;
        std::cin >> user_id;

        while(getline(ticket,line)) // 파일열고 한줄씩 읽기 끝까지 읽음
        {
            stringstream find(line); //find에 읽어온 line 대입
            std::string find_id; // 파일에 저장된 아이디 넣어줄 변수 find_id
            getline(find, find_id, ',');
            if(user_id == find_id) // 맞으면 출력해주기
            {
                std::cout << line << std::endl;
                sleep(2);
                system("clear");
            }
            else
                std::cout << "입력하신 정보와 일치하는 예매내역이 없습니다.";
        }
        // while(getline(ticket,line));//한줄만 읽는건지 공백만 읽는건지
        //     std::cout << line << std::endl; // line이 공백임
        // for (int i = 0; i < ticket_count; i++) // 여러번 예매하면 여러번 출력해야하니깐
        // {
        //     getline(ticket,line);
        //     std::cout << line << std::endl;
        // }
    }
}