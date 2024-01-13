#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <vector>
#include <sstream>

using namespace std;

class asian_cup
{
    private:
    int login_count = 0;
    std::string user_name;
    std::string user_id;
    std::string user_pw;
    std::string user_pnum;
    std::string log_id;
    int ticket_count = 0;
    public:
    void start_asciiart();
    void korea_asciiart();
    // void start_choice();
    void menu_display();
    void log_in();
    void join();
    void dis();
    void find_logindata();
    void find_ticket();
    void day_choice();
    void information();
    void ticketing();
};
#endif