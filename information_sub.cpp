#include "header_sub.h"
void asian_cup::information()
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
            std::cout << "1. A조 경기일정\n2. B조 경기일정\n3. C조 경기일정\n4. D조 경기일정\n5. E조 경기일정\n6. F조 경기일정" << std::endl;
            int group_choice = 0;
            std::cin >> group_choice;
            if(group_choice == 1)
            {
                system("clear");
                std::string line;
                std::ifstream a("A_schedule.txt");
                if(!a.is_open())
                    std::cout << "file open error" << std::endl;
                else
                {
                    while(getline(a,line))
                        std::cout << line << std::endl;
                    a.close();
                }
            }
            else if(group_choice == 2)
            {
                system("clear");
                std::string line;
                ifstream b("B_schedule.txt");
                if(!b.is_open())
                    std::cout << "file open error" << std::endl;
                else
                {
                    while (getline(b, line))
                        std::cout << line << std::endl;
                    b.close();
                }
            }
            else if(group_choice == 3)
            {
                system("clear");
                std::string line;
                ifstream c("C_schedule.txt");
                if(!c.is_open())
                    std::cout << "file open error" << std::endl;
                else 
                {
                    while (getline(c, line))
                        std::cout << line << std::endl;
                    c.close();
                }
            }
            else if(group_choice == 4)
            {
                system("clear");
                std::string line;
                ifstream d("D_schedule.txt");
                if(!d.is_open())
                    std::cout << "file open error" << std::endl;
                else
                {
                    while (getline(d, line))
                        std::cout << line << std::endl;
                    d.close();
                }
            }
            else if(group_choice == 5)
            {
                system("clear");
                std::string line;
                ifstream e("E_schedule.txt");
                if(!e.is_open())
                    std::cout << "file open error" << std::endl;
                else
                {
                    while (getline(e, line))
                        std::cout << line << std::endl;
                    e.close();
                }
            }
            else if(group_choice == 6)
            {
                system("clear");
                std::string line;
                ifstream f("F_schedule.txt");
                if(!f.is_open())
                    std::cout << "file open error" << std::endl;
                else
                {
                    while (getline(f, line))
                        std::cout << line << std::endl;
                    f.close();
                }
            }
            std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
            std::cin >> choice;
            system("clear");
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