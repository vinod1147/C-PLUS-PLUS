#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 10000;
        cout << "Enter the ID of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The ID of this employee is: " << id << endl;
    }
};

int main()
{
    // Employee vinod, tinod, shinod, ninod;
    // vinod.setId();
    // vinod.getId();

    Employee fb[100];
    for (int i = 0; i < 100; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}