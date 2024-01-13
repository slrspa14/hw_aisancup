// #include "display.h"
#include "header_sub.h"

void asian_cup::day_choice()
{
    std::ofstream ofile("ticket_sub.csv",std::ios::app);
    if(!ofile.is_open())
        std::cout << "file open error" << std::endl;
    else // 파일열고
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
            std::string line; //파일 읽으려고
            ifstream file("stadium.txt"); //경기장 아스키아트
            if (!file.is_open()) // 파일오픈 실패시
            {
                std::cout << "file open error" << std::endl;
                exit(0);
            }
            else // 파일오픈시
            {
                int grade_choice1 = 0; // 구역선택용
                while (getline(file, line)) // 경기장 출력
                    std::cout << line << std::endl;
                std::cout << "구역을 선택하세요" << std::endl;
                std::cout << "1. MVIP 150000원\n";
                std::cout << "2. VIP 130000원\n";
                std::cout << "3. GOLD 100000원\n";
                std::cout << "4. SILVER 50000원\n";
                std::cin >> grade_choice1; // 가격담기
                if (grade_choice1 == 1)
                    bucket += 150000;
                else if (grade_choice1 == 2)
                    bucket += 130000;
                else if (grade_choice1 == 3)
                    bucket += 100000;
                else if (grade_choice1 == 4)
                    bucket += 50000;
                file.close();//경기장 닫기
            }

            system("clear");
            int seat [4][4] = {0};
            // int add=0;
            cout << "예약 가능 좌석: 총 16 석" << endl << endl;
            cout << " 1 2 3 4 " << endl;

            for (int j = 0; j < 4; j++)
            {
                cout << char('A' + j);

                for (int i = 0; i < 4; i++) 
                {
                    if (seat[i][j] == 1)
                        cout << "■ ";
                    else 
                    {
                        cout << "□ ";
                        // add++;
                    }
                }
            cout << endl;
            }
            std::cout << "상세좌석을 선택해주세요." << std::endl;
            std::cout << "행을 먼저 선택해주세요: ";
            int seat_choice1 = 0;
            std::cin >> seat_choice1;
            while(seat_choice1 > 4)
            {
                std::cout << "4행이 최대입니다. 다시 선택해주세요.";
                std::cin >> seat_choice1;
            }
            
            std::cout << "열을 선택해주세요: ";
            int seat_choice2 = 0;
            std::cin >> seat_choice2;
            while(seat_choice2 > 4)
            {
                std::cout << "4열이 최대입니다. 다시 선택해주세요.";
                std::cin >> seat_choice2;
            }
            std::cout << "인원:";
            int headcount = 1;
            std::cin >> headcount;
            while(headcount == 0)
            {
                std::cout << "0명은 선택할 수 없습니다." << std::endl;
                std::cout << "다시 선택은 1번 아니라면 0번을 눌러주세요." << std::endl;
                int re_headcount;
                std::cin >> re_headcount;
                if(re_headcount == 1)
                {
                    std::cout << "인원을 다시 선택해주세요.\n인원수:";
                    std::cin >> headcount;
                }
                else if(re_headcount == 0)
                    break;
                else
                {
                    std::cout << "잘못된 선택입니다.";
                    break;
                }
            }
            while(headcount > 4)
            {
                std::cout << "4인이 최대입니다. 다시 선택해주세요";
                std::cin >> headcount;
            }
            std::cout << "결제금액: " << bucket * headcount << "원 입니다." << std::endl;
            std::cout << "결제는 1번, 아니면 2번을 입력해주세요.";
            int pay_choice = 0;
            std::cin >> pay_choice;
            if(pay_choice == 1)
            {
                ofile << "아이디:" << log_id << ",";
                ofile << "1.15 20:30 한국:바레인, "; //파일에 경기일정 저장
                ofile << bucket*headcount << "원, "; // 파일에 가격저장
                ofile << seat_choice1 << "행, "; // 행저장
                ofile << seat_choice2 << "열, "; // 열저장
                ofile << "인원:" << headcount << " " << std::endl; // 인원수 저장
                ticket_count++;
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
                    bucket += 150000;
                else if (grade_choice1 == 2)
                    bucket += 130000;
                else if (grade_choice1 == 3)
                    bucket += 100000;
                else if (grade_choice1 == 4)
                    bucket += 50000;
                file.close();//경기장 닫기
            }
            system("clear");
            int y [4][4] = {0};
            int add=0;
            cout << "예약 가능 좌석: 총 16 석" << endl << endl;
            cout << " 1 2 3 4 " << endl;

            for (int j = 0; j < 4; j++){
                cout << char('A' + j);

                for (int i = 0; i < 4; i++) {
                    if (y[i][j] == 1)
                        cout << "■ ";
                    else {
                        cout << "□ ";
                        add++;
                    }
                }
            cout << endl;
            //system("clear");
        }
            std::cout << "상세좌석을 선택해주세요." << std::endl;
            std::cout << "행을 먼저 선택해주세요: ";
            int seat_choice1 = 0;
            std::cin >> seat_choice1;
            while(seat_choice1 > 4)
            {
                std::cout << "4열이 최대입니다. 다시 선택해주세요.";
                std::cin >> seat_choice1;
            }
            std::cout << "열을 선택해주세요: ";
            int seat_choice2 = 0;
            std::cin >> seat_choice2;
            while(seat_choice2 > 4)
            {
                std::cout << "4열이 최대입니다. 다시 선택해주세요.";
                std::cin >> seat_choice2;
            }
            std::cout << "인원:";
            int headcount = 0;
            std::cin >> headcount;
            while(headcount > 4)
            {
                std::cout << "4인이 최대입니다. 다시 선택해주세요";
                std::cin >> headcount;
            }
            std::cout << "결제금액: " << bucket * headcount << "원 입니다." << std::endl;
            std::cout << "결제는 1번, 아니면 2번을 입력해주세요.";
            int pay_choice = 0;
            std::cin >> pay_choice;
            if(pay_choice == 1)
            {
                ofile << "아이디:" << log_id << ",";
                ofile << "1.20 20:30 한국:요르단"; //파일에 경기일정 저장
                ofile << bucket*headcount << "원, "; // 파일에 가격저장
                ofile << seat_choice1 << "행, "; // 행저장
                ofile << seat_choice2 << "열, "; // 열저장
                ofile << "인원:" << headcount << " " << std::endl; // 인원수 저장
                ticket_count++;
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
                    bucket += 150000;
                else if (grade_choice1 == 2)
                    bucket += 130000;
                else if (grade_choice1 == 3)
                    bucket += 100000;
                else if (grade_choice1 == 4)
                    bucket += 50000;
                file.close();//경기장 닫기
            }
            system("clear");
            int y [4][4] = {0};
            int add=0;
            cout << "예약 가능 좌석: 총 16 석" << endl << endl;
            cout << " 1 2 3 4 " << endl;

            for (int j = 0; j < 4; j++){
                cout << char('A' + j);

                for (int i = 0; i < 4; i++) {
                    if (y[i][j] == 1)
                        cout << "■ ";
                    else {
                        cout << "□ ";
                        add++;
                    }
                }
            cout << endl;
            //system("clear");
        }
            std::cout << "상세좌석을 선택해주세요." << std::endl;
            std::cout << "행을 먼저 선택해주세요: ";
            int seat_choice1 = 0;
            std::cin >> seat_choice1;
            while(seat_choice1 > 4)
            {
                std::cout << "4열이 최대입니다. 다시 선택해주세요.";
                std::cin >> seat_choice1;
            }
            std::cout << "열을 선택해주세요: ";
            int seat_choice2 = 0;
            std::cin >> seat_choice2;
            while(seat_choice2 > 4)
            {
                std::cout << "4열이 최대입니다. 다시 선택해주세요.";
                std::cin >> seat_choice2;
            }
            std::cout << "인원:";
            int headcount = 0;
            std::cin >> headcount;
            while(headcount > 4)
            {
                std::cout << "4인이 최대입니다. 다시 선택해주세요";
                std::cin >> headcount;
            }
            std::cout << "결제금액: " << bucket * headcount << "원 입니다." << std::endl;
            std::cout << "결제는 1번, 아니면 2번을 입력해주세요.";
            int pay_choice = 0;
            std::cin >> pay_choice;
            if(pay_choice == 1)
            {
                ofile << "아이디:" << log_id << ",";
                ofile << "1.25 20:30 한국:말레이시아"; //파일에 경기일정 저장
                ofile << bucket*headcount << "원, "; // 파일에 가격저장
                ofile << seat_choice1 << "행, "; // 행저장
                ofile << seat_choice2 << "열, "; // 열저장
                ofile << "인원:" << headcount << " " << std::endl; // 인원수 저장
                ticket_count++;
                std::cout << "결제금액:" << bucket*headcount <<"원 결제되었습니다." << std::endl;
                sleep(1);
                system("clear");
            }
        }
        ofile.close(); // 파일닫고
    }
}