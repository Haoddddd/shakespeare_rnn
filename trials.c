#include <stdio.h>

#define row1 2
#define row2 3
#define col1 3
#define col2 2

void multiply(int firstMatrix[row1][col1], int secondMatrix[row2][col2], int result[row1][col2]) {
    
    for (int a = 0; a < row1; a++) {
        for (int b = 0; b < col2; b++) {
            result[a][b] = 0;
            for (int c = 0; c < col1; c++) {
                result[a][b] += firstMatrix[a][c] * secondMatrix[c][b];
            }
        }
    }
}

// Function to print a matrix
void output(int matrix[row1][col2]) {
    for (int a = 0; a < row1; a++) {
        for (int b = 0; b < col2; b++) {
            printf("%d ", matrix[a][b]);
    }
        printf("\n");
    }
}

int main() {
    // Predefined matrices
    int firstMatrix[row1][col1] = {
        {4, 7, 8},
        {1, 3, 5}
    };
    
    int secondMatrix[row2][col2] = {
        {13, 5},
        {6, 19},
        {2, 3}
    };
    
    int result[row1][col2];

    // Multiply the matrices
    multiply(firstMatrix, secondMatrix, result);

    // Display the result
    printf("Product of the matrices:\n");
    output(result);

    return 0;
}
