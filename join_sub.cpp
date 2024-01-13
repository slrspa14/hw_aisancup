#include "header_sub.h"

void asian_cup::join()
{
    system("clear");
    std::ofstream file;
    std::string name,id,pw,pnum;
    file.open("join_sub.csv",std::ios::app);
    if(!file.is_open())
        std::cout << "error" << std::endl;
    else
    {
        std::cout << "성명:______\b\b\b\b\b\b";
        std::cin >> name; 
        std::cout << "ID:_____\b\b\b\b\b";
        std::cin >> id;
        std::cout << "PW:_____\b\b\b\b\b";
        std::cin >> pw;
        std::cout << "H.P:___________\b\b\b\b\b\b\b\b\b\b\b";
        std::cin >> pnum;
        std::string line;
        std::ifstream read;
        read.open("join_sub.csv");
        if(!read.is_open())
            std::cout << "file oepn error" << std::endl;
        else
        {
            std::string user_name;
            std::string user_id;
            std::string user_pw;
            std::string user_pnum;
            while(getline(read,line))//한줄씩 읽어온다 끝까지
            {
                std::stringstream ss(line);
                getline(ss,user_name,',');
                getline(ss,user_id,',');
                getline(ss,user_pw,',');
                getline(ss,user_pnum,',');
                while(1)
                {
                    if(name == user_name)
                    {
                        system("clear");
                        std::cout << "중복된 이름입니다.\n다시입력해주세요.\n";
                        std::cout << "이름:______\b\b\b\b\b\b";
                        std::cin >> name;
                    }
                    else
                        break;
                }
                while(1)
                {
                    if(id == user_id)
                    {
                        system("clear");
                        std::cout << "중복된 아이디입니다.\n다시입력해주세요.\n";
                        std::cout << "ID:_____\b\b\b\b\b";
                        std::cin >> id;
                    }
                    else
                        break;
                }
                while(1)
                {
                    if(pw == user_pw)
                    {
                        system("clear");
                        std::cout << "중복된 비밀번호입니다.\n다시입력해주세요.\n";
                        std::cout << "PW:_____\b\b\b\b\b";
                        std::cin >> pw;
                    }
                    else
                        break;
                }
                while(1)
                {
                    if(pnum == user_pnum)
                    {
                        system("clear");
                        std::cout << "중복된 핸드폰번호입니다.\n다시입력해주세요.\n";
                        std::cout << "H.P:___________\b\b\b\b\b\b\b\b\b\b\b";
                        std::cin >> pnum;
                    }
                    else
                        break;
                }
            }
        }
        read.close();
        file << name << ",";
        file << id << ",";
        file << pw << ",";
        file << pnum << std::endl;
        file.close();
    }
    std::cout << "회원가입 완료" << std::endl;
    std::cout << "회원번호: " << rand()%10000 << std::endl; //회원번호 랜덤값
    sleep(2);
    system("clear");
}
