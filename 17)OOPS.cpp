#include <iostream>
using namespace std;

class Employee // Class
{
public:
    string name;
    int salary;

    void printDetails() // Method
    {
        cout << "Name of our first employee is " << this->name << endl;
        cout << "Salary of our first employee is " << this->salary << endl;
    }
};

int main()
{
    Employee employee1; // Object
    employee1.name = "Mooazam";
    employee1.salary = 100000;
    employee1.printDetails();

    return 0;
}