// #include "display.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <vector>
#include <sstream>
using namespace std;
// void display::log_in()
void log_in()
{
    system("clear");
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
        while(1)
        {
            if(strcmp_id(log_id) == 0)
            {
                std::cout << "잘못된 ID입니다. 다시 입력해주세요." << std::endl << "ID:_____\b\b\b\b\b";
                std::cin >> log_id;
            }
            else if(strcmp_pw(log_pw) == 0)
            {
                std::cout << "잘못된 PW입니다. 다시 입력해주세요." << std::endl << "PW_____\b\b\b\b\b";
                std::cin >> log_pw;
            }
            else if (strcmp_id(log_id) == 1 && strcmp_pw(log_pw) == 1)
            {
                std::cout << "로그인되었습니다." << std::endl;
                sleep(1);
                system("clear");
                break;
            }
        }
        file.close();
        login_count++;
    }
}