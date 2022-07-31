#include <iostream>
using namespace std;

int glo = 6;

void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 9;
    glo = 1;
    int a = 4, b = 3454;
    float pi = 3.14;
    char name = 'V';
    bool is_true = true;
    sum();
    cout << glo << is_true;
    // cout << "Here the value of a is: " << a << ".\nThe value of b is: " << b;
    // cout << ".\nThe value of pie is: " << pi;
    // cout << ".\nMy name is: " << name;
    // cout << glo;
    return 0;
}