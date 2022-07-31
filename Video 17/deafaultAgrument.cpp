#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;

    int money = 10000;
    cout << "If you have " << money << "Rs in you bank account, you will recive " << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << "Rs in you bank account, you will recive " << moneyReceived(money, 1.8) << "Rs after 1 year";

    return 0;
}