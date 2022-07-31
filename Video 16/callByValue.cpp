#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int &swapReferenceVar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return a;
}

int main()
{
    int a = 3, b = 4;
    // cout << "The sum of 1 and 1 is: " << sum(a, b);
    cout << "The value of a is: " << a << " and the value of b is: " << b << endl;
    // swap(a, b);
    // swapPointer(&a, &b);
    swapReferenceVar(a, b) = 483;
    cout << "The value of a is: " << a << " and the value of b is: " << b << endl;

    return 0;
}