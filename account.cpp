#include "account.h"
#include<iostream>


int account::show_bal()
{
    return balance;
        std::cout << std::endl;
        std::cout << "\n";

}
int account::deposit(int n)
{
    std::cout << std::endl;
    std::cout << "\n";
    std::cout << "transaction succesful and account balance updated"<<std::endl;
    balance += n;
    return 0;

}
int account::withdraw(int m)
{
    std::cout << "\n";
    if (m > balance)
       std:: cout << "sorry , insufficient balance" << std::endl;
    else
    {
        std::cout << "transaction succesful and account balance updated" << std::endl;
        balance -= m;
    }
    return 0;
}
int account::greet()
{
    std::cout << std::endl;
    std::cout << "\n";
    std::cout << "oh! hello " << name << " nice to see you again" << std::endl;
    return 0;
}