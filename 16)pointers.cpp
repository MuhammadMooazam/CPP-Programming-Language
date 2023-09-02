#include <iostream>
using namespace std;

int main()
{
    float a = 2.2;
    float *ptra;
    ptra = &a;

    cout << "The value of a is " << a << endl;
    cout << "The value of &a is " << &a << endl;
    cout << "The value of ptra is " << ptra << endl;
    cout << "The value of *ptra is " << *ptra << endl;

    a = 1.1;

    cout << "The new value of a is " << a << endl;
    cout << "The new value of &a is " << &a << endl;
    cout << "The new value of ptra is " << ptra << endl;
    cout << "The new value of *ptra is " << *ptra << endl;

    return 0;
}