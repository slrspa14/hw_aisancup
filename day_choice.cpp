#include "display.h"
void display::day_choice()
{
    system("clear");
    int day_choice = 0;
    std::cout << "\t경기일정\n\n";
    std::cout << "1. 1.15 20:30 한국:바레인\n\n";
    std::cout << "2. 1.20 20:30 한국:요르단\n\n";
    std::cout << "3. 1.25 20:30 한국:말레이시아\n\n";
    std::cin >> day_choice;
    if(day_choice == 1)
    {
        system("clear");
        int bucket = 0;
        std::cout << "1. 1.15 20:30 한국:바레인\n\n";
        std::string line;
        ifstream file("stadium.txt"); //경기장 아스키아트
        if (!file.is_open())
            std::cout << "file open error" << std::endl;
        else
        {
            int grade_choice1 = 0;
            while (getline(file, line)) // 경기장 출력
            std::cout << line << std::endl;
            std::cout << "구역을 선택하세요" << std::endl;
            std::cout << "1. MVIP 150000원\n";
            std::cout << "2. VIP 130000원\n";
            std::cout << "3. GOLD 100000원\n";
            std::cout << "4. SILVER 50000원\n";
            std::cin >> grade_choice1;
            if (grade_choice1 == 1)
            {
                grade_choice.push_back("MVIP");
                bucket += 150000;
            }
            else if (grade_choice1 == 2)
            {
                grade_choice.push_back("VIP");
                bucket += 130000;
            }
            else if (grade_choice1 == 3)
            {
                grade_choice.push_back("GOLD");
                bucket += 100000;
            }
            else if (grade_choice1 == 4)
            {
                grade_choice.push_back("SILVER");
                bucket += 50000;
            }
            file.close();//경기장 닫기
        }
        system("clear");
        std::cout << "4x4 좌석";
        std::cout << "상세좌석을 선택해주세요." << std::endl;
        std::cout << "행을 먼저 선택해주세요: ";
        int seat_choice1 = 0;
        std::cin >> seat_choice1;
        while(seat_choice1 > 4)
        {
            std::cout << "4열이 최대입니다. 다시 선택해주세요.";
            std::cin >> seat_choice1;
        }
        seat_num1.push_back(seat_choice1);
        std::cout << "열을 선택해주세요: ";
        int seat_choice2 = 0;
        std::cin >> seat_choice2;
        while(seat_choice2 > 4)
        {
            std::cout << "4열이 최대입니다. 다시 선택해주세요.";
            std::cin >> seat_choice2;
        }
        seat_num2.push_back(seat_choice2);
        std::cout << "인원:";
        int headcount = 0;
        std::cin >> headcount;
        while(headcount > 4)
        {
            std::cout << "4인이 최대입니다. 다시 선택해주세요";
            std::cin >> headcount;
        }
        headcount1.push_back(headcount);
        std::cout << "결제금액: " << bucket * headcount << "원 입니다." << std::endl;
        std::cout << "결제는 1번, 아니면 2번을 입력해주세요.";
        int pay_choice = 0;
        std::cin >> pay_choice;
        if(pay_choice == 1)
        {
            std::cout << "결제금액:" << bucket*headcount <<"원 결제되었습니다." << std::endl;
            sleep(1);
            system("clear");
        }
        else if(pay_choice == 2)
        {            
            system("clear");
            std::cout << "메인페이지로 돌아갑니다." << std::endl;
        }
            
    }

    else if(day_choice == 2)
    {
        system("clear");
        int bucket = 0;
        std::cout << "2. 1.20 20:30 한국:요르단\n\n";
        std::string line;
        ifstream file("stadium.txt"); //경기장 아스키아트
        if (!file.is_open())
            std::cout << "file open error" << std::endl;
        else
        {
            int grade_choice1 = 0;
            while (getline(file, line)) // 경기장 출력
            std::cout << line << std::endl;
            std::cout << "구역을 선택하세요" << std::endl;
            std::cout << "1. MVIP 150000원\n";
            std::cout << "2. VIP 130000원\n";
            std::cout << "3. GOLD 100000원\n";
            std::cout << "4. SILVER 50000원\n";
            std::cin >> grade_choice1;
            if (grade_choice1 == 1)
            {
                grade_choice.push_back("MVIP");
                bucket += 150000;
            }
            else if (grade_choice1 == 2)
            {
                grade_choice.push_back("VIP");
                bucket += 130000;
            }
            else if (grade_choice1 == 3)
            {
                grade_choice.push_back("GOLD");
                bucket += 100000;
            }
            else if (grade_choice1 == 4)
            {
                grade_choice.push_back("SILVER");
                bucket += 50000;
            }
            file.close();//경기장 닫기
        }
        system("clear");
        std::cout << "4x4 좌석";
        std::cout << "상세좌석을 선택해주세요." << std::endl;
        std::cout << "행을 먼저 선택해주세요: ";
        int seat_choice1 = 0;
        std::cin >> seat_choice1;
        while(seat_choice1 > 4)
        {
            std::cout << "4열이 최대입니다. 다시 선택해주세요.";
            std::cin >> seat_choice1;
        }
        seat_num1.push_back(seat_choice1);
        std::cout << "열을 선택해주세요: ";
        int seat_choice2 = 0;
        std::cin >> seat_choice2;
        while(seat_choice2 > 4)
        {
            std::cout << "4열이 최대입니다. 다시 선택해주세요.";
            std::cin >> seat_choice2;
        }
        seat_num2.push_back(seat_choice2);
        std::cout << "인원:";
        int headcount = 0;
        std::cin >> headcount;
        while(headcount > 4)
        {
            std::cout << "4인이 최대입니다. 다시 선택해주세요";
            std::cin >> headcount;
        }
        headcount1.push_back(headcount);
        std::cout << "결제금액: " << bucket * headcount << "원 입니다." << std::endl;
        std::cout << "결제는 1번, 아니면 2번을 입력해주세요.";
        int pay_choice = 0;
        std::cin >> pay_choice;
        if(pay_choice == 1)
        {
            std::cout << "결제금액:" << bucket*headcount <<"원 결제되었습니다." << std::endl;
            sleep(1);
            system("clear");
        }
    }
    else
    {
        system("clear");
        int bucket = 0;
        std::cout << "3. 1.25 20:30 한국:말레이시아\n\n";
        std::string line;
        ifstream file("stadium.txt"); //경기장 아스키아트
        if (!file.is_open())
            std::cout << "file open error" << std::endl;
        else
        {
            int grade_choice1 = 0;
            while (getline(file, line)) // 경기장 출력
            std::cout << line << std::endl;
            std::cout << "구역을 선택하세요" << std::endl;
            std::cout << "1. MVIP 150000원\n";
            std::cout << "2. VIP 130000원\n";
            std::cout << "3. GOLD 100000원\n";
            std::cout << "4. SILVER 50000원\n";
            std::cin >> grade_choice1;
            if (grade_choice1 == 1)
            {
                grade_choice.push_back("MVIP");
                bucket += 150000;
            }
            else if (grade_choice1 == 2)
            {
                grade_choice.push_back("VIP");
                bucket += 130000;
            }
            else if (grade_choice1 == 3)
            {
                grade_choice.push_back("GOLD");
                bucket += 100000;
            }
            else if (grade_choice1 == 4)
            {
                grade_choice.push_back("SILVER");
                bucket += 50000;
            }
            file.close();//경기장 닫기
        }
        system("clear");
        std::cout << "4x4 좌석";
        std::cout << "상세좌석을 선택해주세요." << std::endl;
        std::cout << "행을 먼저 선택해주세요: ";
        int seat_choice1 = 0;
        std::cin >> seat_choice1;
        while(seat_choice1 > 4)
        {
            std::cout << "4열이 최대입니다. 다시 선택해주세요.";
            std::cin >> seat_choice1;
        }
        seat_num1.push_back(seat_choice1);
        std::cout << "열을 선택해주세요: ";
        int seat_choice2 = 0;
        std::cin >> seat_choice2;
        while(seat_choice2 > 4)
        {
            std::cout << "4열이 최대입니다. 다시 선택해주세요.";
            std::cin >> seat_choice2;
        }
        seat_num2.push_back(seat_choice2);
        std::cout << "인원:";
        int headcount = 0;
        std::cin >> headcount;
        while(headcount > 4)
        {
            std::cout << "4인이 최대입니다. 다시 선택해주세요";
            std::cin >> headcount;
        }
        headcount1.push_back(headcount);
        std::cout << "결제금액: " << bucket * headcount << "원 입니다." << std::endl;
        std::cout << "결제는 1번, 아니면 2번을 입력해주세요.";
        int pay_choice = 0;
        std::cin >> pay_choice;
        if(pay_choice == 1)
        {
            std::cout << "결제금액:" << bucket*headcount <<"원 결제되었습니다." << std::endl;
            sleep(1);
            system("clear");
        }
    }
}