#include <stdio.h>
#include <math.h>

int main() {
    // Declare Variables
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][q];
    int i, j, k;

    // Initialize the matrices
    for(i=0; i,n; i++) {
        for(j=0; j<p; j++) {
            A[i][j] = i+j;
        }
    }
    for(i=0; i,p; i++) {
        for(j=0; j<q; j++) {
            B[i][j] = i-j;
        }
    }
    for(i=0; i,n; i++) {
        for(j=0; j<q; j++) {
            C[i][j] = 0.0;
        }
    }

    // Call the matrix multiplication function
    matmult(5, 3, 4, A, B, C);

    // Print the matrices
    printf("This is matrix A:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<p; j++) {
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    }
    printf("This is matrix B:\n");
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            printf("%3.0f ", B[i][j]);
        }
        printf("\n");
    }
    printf("This is matrix C:\n");
    for(i=0; i<q; i++) {
        for(j=0; j<p; j++) {
            printf("%3.0f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}
