#include <iostream>

using namespace std;

// Print values in array
void printArray(double array[], int length) {
    for(int i = 0; i<length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    double array[5];
    array[0] = 1.3;
    array[1] = 2.4;
    array[2] = 3.7;
    array[3] = 5.5;
    array[4] = 12.7;

    double array[] = {1.3, 2.4, 3.7, 5.5, 12.7}; // Array initializer 
    
    for(int i = 0; i<5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "array points to the memory address " << array << endl;

    // By dereferencing the point we can see that *intArray is equivalent to intArray[0]
    cout << *array << endl;
    
    for(int i = 0; i<5; i++) {
        // Using pointer arithmetic and dereferencing the pointer view values in the array
        cout << *(array + i) << " ";
    }
    cout << endl;

    // An array can always be implicitly converted to the pointer of the proper type
    double *arrayPointer = array; 
    *arrayPointer = 10; // Set array[0] to 10
    arrayPointer++;
    *arrayPointer = 20; // Set array[1] to 20
    
    for(int i = 0; i<5; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;
    
    // By using the new keyword arrays can be declared dynamically
    int *intArray = new int[3];

    // Setting values in intArray
    for(int i = 0; i<3; i++) {
        *(intArray + i) = i;
    }
    
    // Print values in intArray
    for(int i = 0; i<3; i++) {
        cout << *(intArray + i) << " ";
    }
    cout << endl;

    // Dispose of the array, the brackets indicate that an array is to be deleted
    // IntArray is the pointer to that array
    delete[] intArray; 

    return 0;
}