#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    int numberA, numberB;
    srand((unsigned)time(0)); //Seeds rand to current time

    numberA = rand()%10+1; //Generates a random number between 1 and 10
    numberB = rand()%10+1; //Generates a random number between 1 and 10

    cout << "What is " << numberA << "*" << numberB << "?" << endl;
    int answer;
    cin >> answer;

    while(numberA*numberB != answer) {
        cout << "Incorrect. Try again." << endl;
        cin >> answer;
    }

    cout << "Yay! You got it right!";

    return 0;
}