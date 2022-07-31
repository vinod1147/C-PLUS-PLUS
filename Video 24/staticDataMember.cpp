#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << " Enter the ID" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID of employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count;

int main()
{
    Employee vinod, dada, didi;
    // vinod.id = 1;
    // vinod.count = 1;

    vinod.setData();
    vinod.getData();
    Employee::getCount();

    dada.setData();
    dada.getData();
    Employee::getCount();

    didi.setData();
    didi.getData();
    Employee::getCount();

    return 0;
}