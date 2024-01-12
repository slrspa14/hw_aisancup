#include "header_sub.h"
void asian_cup::start_asciiart()
{
    std::string line;
    std::ifstream file("asiancup_ASCIIART.txt");
    if (file.is_open()) // 성공하면 열기
    {  
        while (getline(file,line)) // 파일 한줄씩 읽기
        {
            std::cout << line << std::endl; //한줄씩 출력하기
        }
        sleep(2);
        system("clear");
        file.close(); // 열었으면 닫아야지
    }
    else
        std::cout << "error" << std::endl;
}