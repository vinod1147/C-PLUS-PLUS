#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using functions with two arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using functions with three agruments" << endl;
    return a + b + c;
}

int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

int volume(int a)
{
    return (a * a * a);
}

int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    // cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    // cout << "The sum of 3, 7 and 6 is " << sum(3, 7, 6) << endl;
    cout << "The volume of coubiod of 3, 9 and 2 is: " << volume(3, 9, 2) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is: " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is: " << volume(3) << endl;
    return 0;
}