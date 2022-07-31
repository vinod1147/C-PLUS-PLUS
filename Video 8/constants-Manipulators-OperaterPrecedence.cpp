#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // cout << "The value of a was: " << a << endl;
    // a = 98;
    // cout << "The value of a is: " << a << endl;

    // const int a = 3;
    // cout << "The value of a is: " << a << endl;

    // int a = 34, b = 984, c = 83;
    // cout << "The value of a is: " << setw(4) << a << endl;
    // cout << "The value of b is: " << setw(4) << b << endl;
    // cout << "The value of c is: " << setw(4) << c << endl;

    int a = -2, b = 8, c = -9, d = -(-7), e = -(-(-10));
    int f = ((((a * b) + c) - d) + e);

    cout << f;

    return 0;
}