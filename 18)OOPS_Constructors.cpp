#include <iostream>
using namespace std;

class Employee // Class
{
public:
    string name;
    int salary;

    Employee(string n, int s) // Constructor
    {
        this->name = n;
        this->salary = s;
    }

    void printDetails() // Method
    {
        cout << "Name of our first employee is " << this->name << endl;
        cout << "Salary of our first employee is " << this->salary << endl;
    }
};

int main()
{
    Employee employee1("Mooazam", 100000); // Constructor Object
    employee1.printDetails();

    return 0;
}