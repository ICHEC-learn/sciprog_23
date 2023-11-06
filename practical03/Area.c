#include <stdio.h>
#include <math.h>

int main(void) {

    // Declare and Initialize variables
    int N = 12;                             // Number of iteration
    int i = 0;
    double x_i = 0.0;                       // Lower part
    double x_f = M_PI / 3.0;                // Upper part
    double width = (x_f - x_i)/(double)N;   // Width
    double value;                           // Where to store the integrale
    double x, y = 0.;

    // Compute the Sum
    value = tan(x_i) + tan(x_f);

    // Loop over the N values
    for (i = 1; i < N; i++) {                // for loop from 0 to N
        x = x_i + width * i;
        y = tan(x);
        value += 2 * y;
    }
    // Print the values
    double integral_approx = value * width * 0.5;
    double integral_exact = log(2.0);

    printf("The area under the curve is equal to : %lf  \n", integral_approx);
    printf("The value of log(2) is equal to : %lf \n", integral_exact);
    printf("The difference between the approximation and the exact value is : %lf \n", integral_approx - integral_exact);

    return 0;
}
