#include <iostream>
using namespace std;

// Main class
class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

// Child class
class Cat : public Animal
{
public:
    void animalSound()
    {
        cout << "The cat says: meo meo" << endl;
    }
};

// Child class
class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "The dog says: bow wow" << endl;
    }
};

int main()
{
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();

    return 0;
}