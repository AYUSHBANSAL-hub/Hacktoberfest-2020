#include <iostream>
#include <string>
#include"account.h"
using namespace std;



int main()
{
    cout << "Hello World!\n";
    account frank;
    string name_;
    cout << "please enter your name" << std::endl;
    getline(cin, name_);
    frank.name=name_;
    frank.greet();
    int num;
    cout << "how many transaction do you want to make?" << std::endl;
    cin >> num;
    for (int i = 0;i < num;i++)
    {
        char ans;
        std::cout << "\n";
        cout << "if you wnat to make a deposit then enter 'd '........... if you want make a withdraw enter w" << std::endl;
        cin >> ans;
        if (ans == 'd')
        {
            int temp;
            cout << "enter amount" << std::endl;
            cin >> temp;
            frank.deposit(temp);
            cout<<frank.show_bal();
        }
        else
        {
            int temp;
            cout << "enter amount" << std::endl;
            cin >> temp;
            frank.withdraw(temp);
            cout<<frank.show_bal();
        }
    }
    std::cout << "\n";
    cout << "your final balance is........." << frank.show_bal() << std::endl;
    return 0;
}
