#include "header.h"

void asian_cup::join()
{
    system("clear");
    std::string line;
    std::ifstream ifile("join.csv",std::ios_base::in);
    std::ofstream file("join.csv",std::ios_base::out|std::ios::app);
    if(!file.is_open())
        std::cout << "error" << std::endl;
    else
    {
        std::string user_name, user_id, user_pw, user_pnum;
        std::cout << "회원가입" << std::endl;
        std::cout  << "성명:______\b\b\b\b\b\b";//박하늘별님구름햇님보다사랑스러우리
        std::cin >> user_name;
        std::cout << "ID:_____\b\b\b\b\b";
        std::cin >> user_id;
        std::cout << "PW는 5글자이하로 입력해주세요" << std::endl;
        std::cout << "PW:_____\b\b\b\b\b";
        std::cin >> user_pw;
        while(user_pw.size() > 5) // 비번 제한
            std::cout << "5글자이하로 입력해주세요.\n" << "PW:_____\b\b\b\b\b";
        std::cout << "핸드폰번호(11자리, -제외) H.P:___________\b\b\b\b\b\b\b\b\b\b\b";
        std::cin >> user_pnum;

        while(getline(ifile,line))
        {
            std::stringstream ss(line);
            std::string name,id,pw,pnum;
            getline(ss,name,','); // 작은따옴표
            getline(ss,id,',');
            getline(ss,pw,',');
            getline(ss,pnum,',');
            while(name == user_name)
            {
                std::cout << "중복된 이름입니다. 다시 입력해주세요.\n";
                std::cout << "성명:______\b\b\b\b\b\b";
                std::cin >> user_name;
            }
            while(id == user_id)
            {
                std::cout << "중복된 ID입니다. 다시 입력해주세요.\n";
                std::cout << "ID:_____\b\b\b\b\b";
                std::cin >> user_id;
            }
            while(pw == user_pw)
            {
                std::cout << "중복된 PW입니다. 다시 입력해주세요.\n";
                std::cout << "PW:_____\b\b\b\b\b";
                std::cin >> user_pw;
            }
            while(pnum == user_pnum)
            {
                std::cout << "중복된 핸드폰번호입니다. 다시 입력해주세요.\n";
                std::cout << "H.P:___________\b\b\b\b\b\b\b\b\b\b\b";
                std::cin >> user_pnum;
            }
            file << user_name;
            file << user_id;
            file << user_pw;
            file << user_pnum;
            file.close(); // 닫기
            break;
        }
        std::cout << "회원가입 완료" << std::endl;
        std::cout << "회원번호: " << rand()%10000 << std::endl; //회원번호 랜덤값
        sleep(2);
    }
    system("clear");
}