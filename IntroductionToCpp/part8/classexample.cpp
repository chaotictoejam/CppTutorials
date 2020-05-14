#include <iostream>
using namespace std;

class Animal {
    // Access specifier
    private:
    string animalName;
    string animalSound;

    // Access specifier
    public:
    // Constructor
    Animal(string animalName, string animalSound) {
        this->animalName = animalName;
        this->animalSound = animalSound;
    }

    // Member Functions() 
    void printAnimalName() {
        cout << "This is a " << animalName << endl;
    }

    void printSound() {
        cout << "The " << animalName << " says " << animalSound << endl;
    }
};

int main() {
   // Declare an object of class Animal
    Animal cow("cow", "moo");

    /*
    // accessing data member 
    cow.animalName = "cow";
    cow.animalSound = "moo";*/

    // accessing member function 
    cow.printAnimalName();
    cow.printSound();

    return 0;
}