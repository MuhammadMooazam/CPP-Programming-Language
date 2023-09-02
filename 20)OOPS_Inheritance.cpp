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

class Engineer : public Employee // Child Class
{
public:
    string task = "Program Software";
};

int main()
{
    Engineer engineer1;         // Object of child class
    engineer1.name = "Mooazam"; // Setting values in parent class
    engineer1.salary = 100000;  // Setting values in parent class
    engineer1.printDetails();   // Accessing parent class
    cout << "Task of our first employee is to " << engineer1.task << endl;

    return 0;
}