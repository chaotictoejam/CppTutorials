#include <iostream>
using namespace std;

// Prints a two-dimensional array with a column length of 3
void printMatrix(int matrix[][3], int rowLength) {
    for(int i=0; i<rowLength; i++) {
        for(int j=0; j<3;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Prints a two-dimensional array (pointer of pointers)
void printMatrixPointer(int **matrix, int rowLength, int colLength) {
    for(int i=0; i<rowLength; i++) {
        for(int j=0; j<colLength;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Creating a two-dimensional array
    int matrix[5][3];
    for(int i=0; i<5; i++) {
        for(int j=0; j<3;j++) {
            matrix[i][j] = (i+1)*(j+1);
        }
    }
    
    printMatrix(matrix, 5);

    // Create a two-dimensional array (pointer of pointers)
    int **matrixPointer;
    matrixPointer = new int*[5];
    for(int i=0; i<5; i++) {
        matrixPointer[i] = new int[3];
        for(int j=0; j<3;j++) {
            matrixPointer[i][j] = (i+1)*(j+1);
        }
    }

    printMatrixPointer(matrixPointer, 5, 3);

    // Deallocate two-dimensional array
    for(int i=0; i<5; i++) {
        delete[] matrixPointer[i];
    }
    delete[] matrixPointer;

    return 0;
}