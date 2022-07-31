#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{

    ep vinod;
    vinod.eId = 1;
    vinod.favChar = 'v';
    vinod.salary = 1000;

    cout << "Employee ID: " << vinod.eId << endl;
    cout << "Employee Favorite Charecter: " << vinod.favChar << endl;
    cout << "Employee Salary: " << vinod.salary << endl;

    return 0;
}