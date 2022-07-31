#include <iostream>
using namespace std;

int main()
{
    int a = 89, b = 53;
    cout << "This program is running" << endl;
    cout << "This value of a + b: " << a + b << endl;
    cout << "This value of a - b: " << a - b << endl;
    cout << "This value of a * b: " << a * b << endl;
    cout << "This value of a / b: " << a / b << endl;
    cout << "This value of a % b: " << a % b << endl;
    cout << "This value of a++: " << a++ << endl;
    cout << "This value of a--: " << a-- << endl;
    cout << "This value of ++a: " << ++a << endl;
    cout << "This value of --a: " << --a << endl;
    cout << endl;
    cout << "The value of a == b is: " << (a == b) << endl;
    cout << "The value of a != b is: " << (a != b) << endl;
    cout << "The value of a > b is: " << (a > b) << endl;
    cout << "The value of a < b is: " << (a < b) << endl;
    cout << "The value of a <= b is: " << (a <= b) << endl;
    cout << "The value of a >= b is: " << (a >= b) << endl;
    cout << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}