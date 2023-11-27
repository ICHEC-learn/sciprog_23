#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int sum1 = 0;
    int i, j;
    // Checking that every row and column add up to M
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            sum1 += square[i][j];
        }
        if (sum1 != M) {
            return 0;
        }
        sum1 = 0;  // Reset sum1 for the next row/column
    }

    // Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square
    int sum2 = 0, sum3 = 0;
    for (i = 0; i < n; i++) {
        sum2 += square[i][i];
        sum3 += square[i][n - 1 - i];
    }
    if (sum2 != M || sum3 != M) {
        return 0;
    }
    return 1;
}

