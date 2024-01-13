#include "header_sub.h"
void asian_cup::find_logindata()
{
    //파일 열고 회원가입시 사용한 이름과 번호랑 같은 id pw 보여주기
    system("clear");
    std::cout << "ID/PW 찾기" << std::endl;
    ifstream find("join_sub.csv");
    if(!find.is_open())
        std::cout << "file open error" << std::endl;
    else
    {
        std::cout << "성명:______\b\b\b\b\b\b";
        std::string user_name;
        std::cin >> user_name;
        std::cout << "핸드폰번호(11자리-제외) ___________\b\b\b\b\b\b\b\b\b\b\b\b";
        std::string user_pnum;
        std::cin >> user_pnum;

        std::string line; //파일 읽어올 line 문자열
        while(getline(find,line)) // 파일 한줄씩 끝까지읽기
        {
            std::string file_name,file_pnum; //비교할 변수
            std::stringstream ss(line); //ss에 읽어온 line 한 줄씩 넣기 
            getline(ss,file_name,',');//공백기준으로 자른다
            getline(ss,file_pnum,',');
            if(user_name == file_name && user_pnum == file_pnum)
            {
                std::cout << "id,pw는 이거입니다...." << std::endl;
                std::cout << "ID:" << "찾아온 ID";
                std::cout << "PW:" << "찾아온 PW";
                break;
            }
            else if(user_name != file_name && user_pnum != file_pnum)
            {
                std::cout << "등록되지 않은 이름 및 핸드폰번호입니다.\n다시 입력해주세요." << std::endl;
                std::cout << "성명:______\b\b\b\b\b\b";
                std::cin >> user_name;
                std::cout << "H.P:___________\b\b\b\b\b\b\b\b\b\b\b";
                std::cin >> user_pnum;
            }
        }
    }
}