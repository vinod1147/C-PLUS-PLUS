#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // static int c = 1;
    // c = c + 1;
    return a * b;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    cout << "The product of a and b is: " << product(a, b) << endl;
    return 0;
}