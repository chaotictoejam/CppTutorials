#include <iostream>
using namespace std;

void setValueToFive(int x) {
    //Value will not be modified outside of function
    x = 5;
}

void setPointerValueToFive(int *x) {
    //Value will be modified outside of function
    *x = 5;
}

void setValueToFiveWithReference(int &x) {
    //Value will be modified outside of function
    x = 5;
}

int main(){
    int firstValue, secondValue, *numberPointer; //Declare int and pointer

    cout << "The numberPointer points to the memory address " << numberPointer << endl;

    numberPointer = &firstValue; // Set pointer is assigned the address of firstValue
    cout << "The numberPointer points to the memory address " << numberPointer << endl;
    *numberPointer = 10; // the value pointed to by pointer is assigned a value of 10

    numberPointer = &secondValue; // Set pointer is assigned the address of secondValue
    cout << "The numberPointer points to the memory address " << numberPointer << endl;
    *numberPointer = 20; // the value pointed to by pointer is assigned a value of 20

    cout << "firstValue is " << firstValue << endl;
    cout << "secondValue is " << secondValue << endl;

    int x = 3;
    setValueToFive(x); // x will remain unchanged
    cout << "The value of x is " << x << endl;

    setPointerValueToFive(&x); // x will be modified
    cout << "The value of x is " << x << endl;

    int y = 2;
    setValueToFiveWithReference(y); // y will be modified
    cout << "The value of y is " << y << endl;

    //Dynamically allocate memory
    int *p = new int(3);

    //Deallocate memory
    delete p;
    p = NULL;

    return 0;
}