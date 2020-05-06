#include <iostream>
using namespace std;

bool knockOnDoor(bool profHere, bool doorOpen) {
    /*if(profHere && !doorOpen) {
        return true;
    }
    return false;*/

    return profHere && !doorOpen;
}

bool kittyTrouble(bool catAHappy, bool catBHappy) {
    /*if(!catAHappy || !catBHappy) {
        return true;
    }
    return false;*/

    return !catAHappy || !catBHappy;
}

bool integersAreEqual(int x, int y) {
    return x == y;
}

void numberIsEven(int x) {
    if(x % 2 == 0) {
        cout << "Number is even";
    } else {
        cout << "Number is odd";
    }
    cout << endl;
}

int main() {
    // Ternary operator example:
    string result = knockOnDoor(true, false) ? "Knock" : "Don't knock";
    cout << result << endl;
    result = kittyTrouble(true, true) ? "In trouble" : "Not in trouble";
    cout << result << endl;

    cout << integersAreEqual(3,4) << endl;

    numberIsEven(5);

    return 0;
}