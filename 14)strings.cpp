#include <iostream>
using namespace std;

int main()
{
    string name = "Mooazam";

    cout << "The name is " << name << endl;
    cout << "The length of name is " << name.length() << endl;
    cout << "The name is " << name.substr(1, 155) << endl;
    cout << "The name is " << name.substr(2, 3);

    return 0;
}
