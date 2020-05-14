#include <iostream>
using namespace std;

struct Pair {
    public:
        int *key;
        int *value;

        Pair(int key, int value) {
            // Allocate the memory to hold an int, and set key and value values
            this->key = new int;
            this->value = new int;
            
            *this->key = key;
            *this->value = value;
        }

        // Copy constructor 
        Pair(const Pair &p){
            //Allocate the memory to hold an int
            key = new int(*p.key);
            value = new int(*p.value);
        }

        // Destructor
        // Is automatically called when its associated object is deleted
        ~Pair() {
            delete key;
            delete value;

            cout << "Destructor called" << endl; // Outprint to show destructor is called
        }
};

int main() {
    Pair pair1(1, 5); // Normal constructor is called here 
    Pair pair2 = pair1; // Calls copy constructor
    
    *pair2.key = 5;

    cout << "Pair 1: " << *pair1.key << " " << *pair1.value << endl;
    cout << "Pair 2: " << *pair2.key << " " << *pair2.value << endl;
    cout << "Pair 1: " << pair1.key << " " << pair1.value << endl;
    cout << "Pair 2: " << pair2.key << " " << pair2.value << endl;

    pair1.~Pair();
}