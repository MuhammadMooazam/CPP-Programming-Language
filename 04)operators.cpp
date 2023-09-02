#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 4;

    cout << "Following are the Arithmetic operators:-" << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl;
    cout << a << "++ " << " = " << a++ << endl;
    cout << a << "-- " << " = " << a-- << endl;
    cout << "++" << a << " = " << ++a << endl;
    cout << "--" << a << " = " << --a << endl << endl;

    cout << "Following are the Comparision operators:-" << endl;
    cout << a << " == " << b << " is " << (a == b) << endl;
    cout << a << " != " << b << " is " << (a != b) << endl;
    cout << a << " > " << b << " is " << (a > b) << endl;
    cout << a << " < " << b << " is " << (a < b) << endl;
    cout << a << " >= " << b << " is " << (a >= b) << endl;
    cout << a << " <= " << b << " is " << (a <= b) << endl << endl;

    cout << "Following are the Logical operators:-" << endl;
    cout << "(a==b) && (a>b) is " << ((a == b) && (a > b)) << endl;
    cout << "(a==b) || (a>b) is " << ((a == b) || (a > b)) << endl;
    cout << "!(a==b) is " << (!(a == b)) << endl;

    return 0;
}