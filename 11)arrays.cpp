#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for " << i + 1 << " student is ";
        cin >> marks[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Marks of " << i + 1 << " student is " << marks[i] << endl;
    }

    return 0;
}
