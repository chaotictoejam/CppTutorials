#include <iostream>
using namespace std;

double discriminant(int a, int b, int c) {
    return b*b-4*a*c;
}

int main() {
    // Prompts user for input
    cout << "Enter a number for a:";
    int a;
    cin >> a;

    cout << "Enter a number for b:";
    int b;
    cin >> b;

    cout << "Enter a number for c:";
    int c;
    cin >> c;

    // Calculates the discriminant b^2-4*a*c
    double disc = discriminant(a, b, c);

    cout << "The discriminant is: " << disc;

    return 0;
}