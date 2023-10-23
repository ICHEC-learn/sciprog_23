#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare and Initialize variables */
    pi = atanf(1.0)/4.0;            // Definition of Pi
    N = 12;                         // Number of iteration
    double a = 0.0;                 // Lower part
    double b = pi/3.0;              // Upper part
    double width = (b-a)/(double)N; // Width
    double value ;                  // Where to store the integrale
    double x, y;

/* Compute the Sum */
    value = tan(a) + tan(b);  

    for (int i=1; i < N; i++);          // for loop from 0 to N
        value += 2 * tan(a+width*i);    
    
/* Print the values */
    printf("The area under the curve is equal to %.5f \n", value*width/2);
    printf("The value of log(2) is equal to : %.5f", log2);

    return 0;
}