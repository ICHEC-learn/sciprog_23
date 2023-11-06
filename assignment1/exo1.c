#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declare global variables and functions
const int N = 4;
void generate_matrix(float Mat[N][N]);
float det3(float Mat[3][3]);
float det4(float Mat[4][4]);


int main() {
    // Declare the variables
    int i, j = 0;
    float A[N][N];

    // Initialize the Matrix using a function
    generate_matrix(A);

    // Print the Matrix
    printf("The matrix A is :\n");
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    // Compute the 4x4 det using a function
    float determinant = det4(A);
    printf("The determinant is : %f\n", determinant);

    return 0;
}

void generate_matrix(float Mat[N][N]) {
    // Generate a Matrix
    // Parameter : Mat[N][N] is a Matrix or size NxN
    // Returns : NULL as function is void

    // of size set as a constant variables

    // Declare and initialize the loop
    int i, j = 0;

    for (i=0; i<N; i++) {           // Loop over rows
        for (j=0; j<N; j++) {       // Loop over columns
            Mat[i][j] = 1. / (i + j + 1);
        }
    }
}

float det3(float Mat[3][3]) {
    // Calculate the determinant of a 3x3 Matrix
    // Parameter : Mat[3][3], matrix of size 3x3
    // Returns : det, the value of the determinant

    // Could have done it zith loops but too complicated
    // so I stick with a simple but repetitive approach
    float s1, s2, s3, det;
    s1 = Mat[0][0] * (Mat[1][1] * Mat[2][2] - Mat[1][2] * Mat[2][1]);
    s2 = Mat[0][1] * (Mat[1][0] * Mat[2][2] - Mat[1][2] * Mat[2][0]);
    s3 = Mat[0][2] * (Mat[1][0] * Mat[2][1] - Mat[1][1] * Mat[2][0]);

    det = s1 - s2 + s3;
    // I checked and it returns the right value for a given 3x3 matrix
    return det;
}

float det4(float Mat[4][4]) {
    // Calculate the determinant of a 4x4 Matrix
    // Parameter : Mat[4][4], matrix of size 4x4
    // Returns : det, the value of the determinant

    // Declare variables
    float det=0.;
    int i, j, k, l = 0;
    int sign = 0;

    // Loop over columns
    for (j=0; j<4; j++) {
        float SubMat[3][3];     // Create the Sub 3x3 matrix

        for (k=1; k<4; k++) {       // Loop over rows without the first one
            for (l=1; l<4; l++) {   // Loop over columns without the first one
                SubMat[k-1][l-1] = Mat[k][l];   // Extraction
            }
        }

        for (k=0; k<3; k++) {       // Loop over rows
            // Replace the column j with the last colum
            SubMat[k][j] = Mat[k][3];
        }

        // Set the sign of the sum
        // -1 for j = 1 or 3
        // 1 for j = 0 or 2
        if (j % 2 == 0) {sign = +1;}
        else {sign = -1;}

        // The value of the determinant is added
        // for each iteration of the loop using
        // the sign and the fnction det3 used before
        // The value of i does not change
        det += Mat[0][j] * sign * det3(SubMat);
    }
    // It returns a value but not the expected one
    // I checked the mathematical part and it seems fine
    // The error seems to be located in the extraction of the matrix
    return det;
}
