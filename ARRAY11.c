//Multiply two matrices.
//Given matrix A (m×p) and matrix B (p×n), compute their product A×B.

#include <stdio.h>

int main() {
    int m, p, n;
    printf("Enter the number of rows of matrix A (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns of matrix A / rows of matrix B (p): ");
    scanf("%d", &p);
    printf("Enter the number of columns of matrix B (n): ");
    scanf("%d", &n);
    
    int A[m][p], B[p][n], C[m][n];
    
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }
    
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Resultant matrix C (A x B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}