#include "display.h"

int choice = 0;
void display::dis()
{
    while (choice < 6)
    {
        if (choice > 6)
            break;
        menu_display();
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                if (login_count > 0)
                {
                    system("clear");
                    std::cout << "로그인상태입니다." << std::endl;
                    sleep(1);
                    system("clear");
                    break;
                }
                log_in();
                break;
            }

            case 2:
                file_save();
                break;

            case 3:
                find_logindata();
                break;

            case 4:
            {
                system("clear");
                if (id_v.size() == 0)
                {
                    std::cout << "로그인 후 이용 가능합니다." << std::endl;
                    sleep(1);
                    system("clear");
                    break;
                }
                std::cout << "1. 예매하기" << std::endl;
                std::cout << "2. 예매확인" << std::endl;
                std::cin >> choice;
                if(choice == 1)
                    day_choice();
                else
                {
                    find_ticket();
                    // std::cout << "예매정보가 없습니다." << std::endl;
                    break;
                }
                break;
            }    
            case 5:
            {
                system("clear");
                std::cout << "1. 경기 일정, 개최지, 중계 등 기본정보" << std::endl;
                std::cout << "2. 참가국 및 조별 정보" << std::endl;
                std::cout << "3. 조별 경기일정" << std::endl;
                std::cout << "4. 한국 감독/선수 명단 선수 정보" << std::endl;
                information();
                break;
            }
            default:
                break;
        }

    }
}