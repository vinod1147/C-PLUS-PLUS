#include <iostream>
using namespace std;

int sum(int a, int b);
void g();

int main()
{
    int num1, num2;
    cout << "Enter first no. ";
    cin >> num1;
    cout << "Enter second no. ";
    cin >> num2;
    cout << "The sum of a and b is: " << sum(num1, num2) << endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "This progarm is running!!!!";
}