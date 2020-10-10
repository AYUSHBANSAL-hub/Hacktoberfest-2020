#pragma once
#include<string>

class account
{
public:
    std::string name;
    int balance = 0;
    int show_bal();
    int deposit(int n);
    int withdraw(int m);
    int greet();
};