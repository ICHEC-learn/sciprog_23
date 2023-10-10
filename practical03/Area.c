#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
    int i, N;
    float value, h, a, b, pi, log2;

/* Initialize the value */
    pi = atanf(1.0)/4.0;            // Definition of Pi
    a = 0;
    b = pi / 3;                     // First values of a and b
    N = 12;                         // Number of iteration
    log2 = log(2);

/* Compute the Sum */
    h = (b - a) / (N - 1);          // Create 11 equidistants points

    value = 2 * (tan(a) + tan(b));  
    for (i=0; i < N; i++);          // for loop from 0 to N
        value += tan(a+h*(i-1));
    
/* Print the values */
    printf("The area under the curve is equal to %f \n", value);
    printf("The value of log(2) is equal to : %f", log2);
}