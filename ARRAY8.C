//Find the transpose of a matrix.
//Given a matrix A of size m×n, print its transpose Aᵀ of size n×m.

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}