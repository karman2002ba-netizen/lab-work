//Traverse the matrix and return the maximum value present in it.

#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int maxValue = matrix[0][0];

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
            }
        }
    }

    printf("The maximum value in the matrix is: %d\n", maxValue);

    return 0;
}