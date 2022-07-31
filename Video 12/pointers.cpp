#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b;
    b = &a;

    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;

    cout << "The value of b is: " << *b << endl;

    int **c = &b;

    cout << "The address of b is: " << &b << endl;
    cout << "The address of c is: " << c << endl;

    return 0;
}