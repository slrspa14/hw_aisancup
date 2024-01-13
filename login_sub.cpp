#include "header_sub.h"

void asian_cup::log_in()
{
    system("clear");
    int log_count = 0;
    while(log_count <= 0)
    {
        system("clear");
        std::string line;
        std::ifstream file("join_sub.csv");
        if(!file.is_open())
        {
            std::cout << "file open error" << std::endl;
            break;
        }
        else
        {
            std::cout << "ID:_____\b\b\b\b\b";
            string log_id;
            std::cin >> log_id;
            std::cout << "PW:_____\b\b\b\b\b";
            std::string log_pw;
            std::cin >> log_pw;
            while(getline(file,line))
            {   // vector
                std::string file_id, file_pw;
                std::stringstream ss(line); // while 밖에 있었더니 안됐다
                getline(ss,file_id,','); // 작은따옴표
                getline(ss,file_pw,',');
                if(log_id == file_id && log_pw == file_pw)
                {
                    std::cout << "로그인되었습니다." << std::endl;
                    log_count++;
                    login_count++;
                    std::ofstream ticket("ticket_sub.csv",std::ios::app);
                    if(!ticket.is_open())
                        std::cout << "file open error" << std::endl;
                    else
                        ticket << log_id << ",";
                    sleep(1);
                    system("clear");
                    file.close();
                    break;
                }
            }
            if(log_count ==0)
            {
                std::cout << "입려하신 정보와 일치하는 ID 및 PW가 없습니다." << std::endl;
                std::cout << "다시 입력을 원하시면 1번 메인페이지로 이동을 원하시면 0번을 눌러주세요.\n";
                int re_log = 0;
                std::cin >>re_log;
                if(re_log == 0)
                {
                    system("clear");
                    break;
                }
            }
        }
    }
}