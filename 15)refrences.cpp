#include <iostream>
using namespace std;

int main()
{
    string var1 = "Value1"; // var1 variable
    string &var2 = var1;    // reference to var1

    cout << "The value of var1 is " << var1 << endl;
    cout << "The value of var2 is " << var2 << endl;

    var1 = "Value2";

    cout << "The new value of var1 is " << var1 << endl;
    cout << "The new value of var2 is " << var2 << endl;

    return 0;
}