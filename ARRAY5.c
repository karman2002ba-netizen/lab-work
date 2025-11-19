//Write a program to take an m×n matrix as input and calculate the total sum of all elements

#include<stdio.h>

int main() {
    int m, n, i, j, sum = 0;

    
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    
    printf("The total sum of all elements in the matrix is: %d\n", sum);

    return 0;
}