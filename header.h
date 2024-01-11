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
    public:
    void start_asciiart();
    void korea_asciiart();
    void start_choice();
    void menu_display();
    void log_in();
    void join();
    void find_logindata();
    void find_ticket();
    void day_choice();
    void information();
    void ticketing();
    int while_vector1(string name);
    int while_vector2(string id);
    int while_vector3(string pw);
    int while_vector4(string pnum);
    int strcmp_id(string log_id);
    int strcmp_pw(string log_pw);
    int strcmp_name(string user_name);
    int strcmp_pnum(string user_pnum);
};
#endif