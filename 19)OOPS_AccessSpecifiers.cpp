#include <iostream>
using namespace std;

class Employee // Class
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp) // Constructor
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails() // Method
    {
        cout << "ame of our first employee is " << this->name << endl;
        cout << "Salary of our first employee is " << this->salary << endl;
    }

    void getsecretPassword() // Getter and Setter Method
    {
        cout << "Secret Password is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

int main()
{
    Employee employee1("Mooazam", 100000, 123); // Constructor Object
    employee1.printDetails();

    // cout << "Secret Password is " << employee1.secretPassword << endl;
    // Above line can not run because secretPassword is private.

    employee1.getsecretPassword();

    return 0;
}