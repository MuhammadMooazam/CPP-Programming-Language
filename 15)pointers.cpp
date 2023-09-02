#include <iostream>
using namespace std;

int main()
{
    float a = 34.34;
    float *ptra;
    ptra = &a;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *ptra << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << ptra << endl;

    return 0;
}