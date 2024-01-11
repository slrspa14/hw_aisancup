#include "display.h"
void display::find_logindata()
{
    system("clear");
    std::cout << "ID/PW 찾기" << std::endl;
    std::cout << "성명:______\b\b\b\b\b\b";
    std::string user_name;
    std::cin >> user_name;
    std::cout << "핸드폰번호(11자리-제외) ___________\b\b\b\b\b\b\b\b\b\b\b\b";
    std::string user_pnum;
    std::cin >> user_pnum;
    while(1)
    {
        if(strcmp_name(user_name) == 0)
        {
            std::cout << "등록되지 않은 이름입니다." << std::endl;
            std::cout << "메인페이지로 이동을 원하시면 1번을 다시 입력하기를 원하시면 0번을 눌러주세요." << std::endl;
            int choice = 0;
            std::cin >> choice;
            if(choice == 0)
            {
                system("clear");
                std::cout << "다시 입력해주세요.\n성명:______\b\b\b\b\b\b";
                std::cin >> user_name;
            }
            else if(choice == 1)
            {
                system("clear");
                break;
            }
        }
        else if(strcmp_pnum(user_pnum) == 0)
        {
            std::cout << "등록되지 않은 번호입니다." << std::endl;
            std::cout << "메인페이지로 이동을 원하시면 1번을 다시 입력하기를 원하시면 0번을 눌러주세요." << std::endl;
            int choice = 0;
            std::cin >> choice;
            if(choice == 0)
            {
                system("clear");
                std::cout << "다시 입력해주세요.\n핸드폰번호(11자리,-제외):___________\b\b\b\b\b\b\b\b\b\b\b";
                std::cin >> user_pnum;
            }
            else if(choice == 1)
            {
                system("clear");
                break;
            }
        }
        else if(strcmp_name(user_name) == 1 && strcmp_pnum(user_pnum) == 1)
        {
            std::cout << "입력하신 성함과 번호에 일치하는\nID:";
            for (int i = 0; i < id_v.size(); i++)
                cout << id_v[i] << endl;
            std::cout << "PW:";
            for (int j = 0; j < pw_v.size(); j++)
                cout << pw_v[j] << endl;
            sleep(2);
            system("clear");
            break;
        }
    }
    // break;
}
int display::strcmp_name(string user_name)
{
    if(name_v.size() !=0)
    {
        for (int i = 0; i < name_v.size(); i++)
        {
            if(name_v[i] == user_name)
                return 1;
        }
    }
    return 0;
}
int display::strcmp_pnum(string user_pnum)
{
    if(pnum_v.size() !=0)
    {
        for (int i = 0; i < pnum_v.size(); i++)
        {
            if(pnum_v[i] == user_pnum)
                return 1;
        }
    }
    return 0;
}