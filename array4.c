//WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read 
//matrix A and matrix B in row major order respectively. Print both the input matrices and resultant 
//matrix with suitable headings and output should be in matrix format only. Program must check 
//the compatibility of orders of the matrices for multiplication. Report appropriate message in case 
//of incompatibility

#include<stdio.h>

int main(){

    int m,n,p,q,i,j,k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d",&m,&n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d",&p,&q);

    if(n!=p){
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter elements of first matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&B[i][j]);
        }
    }

    
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            C[i][j] = 0;
        }
    }

    
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<n;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    printf("Matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    
    printf("Matrix B:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    
    printf("Resultant Matrix C (A x B):\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}