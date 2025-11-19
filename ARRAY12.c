//Take an m×n matrix and a key. Search for the key and print its row and column index if found. 
#include<stdio.h>

int main() {
    int m, n, i, j, key, found = 0;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int matric[m][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matric[i][j]);
        }
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(matric[i][j] == key) {
                printf("Key %d found at row %d, column %d\n", key, i, j);
                found = 1;
            }
        }
    }
    if(!found) {
        printf("Key %d not found in the matrix.\n", key);
    }
    return 0;
}