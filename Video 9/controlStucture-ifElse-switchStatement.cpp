#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter you age: " << endl;
    cin >> age;
    // if ((age < 18) && (age > 10))
    // {
    //     cout << "You don't have permission to access this (:" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You can partially access this :)" << endl;
    // }
    // else if (age < 10)
    // {
    //     cout << "You are too young to access this :(" << endl;
    // }
    // else
    // {
    //     cout << "You have full access :)" << endl;
    // }

    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;
    case 22:
        cout << "You are 22";
        break;
    case 2:
        cout << "You are 2";
        break;
    default:
        cout << "There are no special cases";
        break;
    }

    return 0;
}