// #include <iostream>
// using namespace std;

// int main()
// {
//     int marks[4] = {48, 84, 83, 98};
//     marks[2] = 9387;
//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout << marks[3] << endl;

// for (int i = 0; i < 4; i++)
// {
//     cout << "The value of marks " << i << " is" << marks[i] << endl;
// }

// return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int marks[4]{83, 28, 25, 92};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is" << marks[i] << endl;
    }

    return 0;
}