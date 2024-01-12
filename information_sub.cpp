#include "header_sub.h"
void display::information()
{
    int choice = 0;
    std::cin >> choice;
    switch (choice)
    {        
        case 1:
        {
            system("clear");
            std::string line;
            std::ifstream file("basic.txt");
            if (!file.is_open())
            {
                std::cout << "file open error" << std::endl;
                break;
            }
            else
            {
                while (getline(file, line))
                    std::cout << line << std::endl;
            }
            std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
            std::cin >> choice;
            system("clear");
            file.close();
            break;
        }
        case 2:
        {
            system("clear");
            std::string line;
            std::ifstream file("country.txt");
            if (!file.is_open())
            {
                std::cout << "file open error" << std::endl;
                break;
            }
            else
            {
                while (getline(file, line))
                    std::cout << line << std::endl;
            }
            std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
            std::cin >> choice;
            system("clear");
            file.close();
            break;
        }
        case 3:
        {
            system("clear");
            std::string line;
            std::ifstream file("game_schedule.txt");
            if (!file.is_open())
            {
                std::cout << "file open error" << std::endl;
                break;
            }
            else
            {
                while (getline(file, line))
                    std::cout << line << std::endl;
            }
            std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
            std::cin >> choice;
            system("clear");
            file.close();
            break;
        }
        case 4:
        {
            system("clear");
            korea_asciiart();
            sleep(1);
            std::string line;
            std::ifstream file("korean.txt");
            if (!file.is_open())
            {
                std::cout << "file open error" << std::endl;
                break;
            }
            else
            {
                while (getline(file, line))
                    std::cout << line << std::endl;
            }
            std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
            std::cin >> choice;
            file.close();
            system("clear");
            break;
        }
        default:
            break;
    }
}