#include "header_sub.h"

void asian_cup::log_in()
{
    system("clear");
    std::string line;
    std::ifstream file("join.csv");
    if(!file.is_open())
        std::cout << "file open error" << std::endl;
    else
    {
        std::cout << "ID:_____\b\b\b\b\b";
        string log_id;
        std::cin >> log_id;
        std::cout << "PW:_____\b\b\b\b\b";
        std::string log_pw;
        std::cin >> log_pw;
        while(getline(file,line))
        {
            stringstream ss(line);
            std::string file_id, file_pw;
            getline(ss, file_id, ','); // 작은따옴표
            getline(ss, file_pw, ',');
            while(log_id != file_id)
            {
                std::cout << "일치하는 ID가 없습니다.";
                std::cout << "다시 입력을 원하시면 1번 메인페이지로 이동을 원하시면 0번을 눌러주세요." << std::endl;
                int re_id = 0;
                std::cin >> re_id;
                if(re_id == 1)
                {
                    std::cout << "ID:_____\b\b\b\b\b";
                    std::cin >> log_id;
                }
                else
                    break;
            }
            while(log_pw != file_pw)
            {
                std::cout << "일치하는 PW가 없습니다.";
                std::cout << "다시 입력을 원하시면 1번 메인페이졸 이동을 원하시면 0번을 눌러주세요" << std::endl;
                int re_pw = 0;
                std::cin >> re_pw;
                if(re_pw == 1)
                {
                    std::cout << "PW:_____\b\b\b\b\b";
                    std::cin >> log_pw;
                }
                else
                    break;
            }
        }
        file.close();
        login_count++;
        std::fstream ofile("ticket.csv",std::ios::app);
        if(!ofile.is_open())
            std::cout << "file open error" << std::endl;
        else
            ofile << log_id << ",";
        ofile.close();
    }
}