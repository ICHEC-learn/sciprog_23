#include <stdio.h>
#include <math.h>


// Global variables
const int N = 12;
double TanVal[13];

// Functions
double degtorad(double deg);
double traprule(int n);

int main(void) {
    int i = 0;
    double degang = 0, radang = 0;

    for (i = 0; i < N; i++) {
        degang = i * 5.0;
        radang = degtorad(degang);
        TanVal[i] = tan(radang);
    }

    // Calculate the integral using two methods
    double integ_approx = traprule(N);
    double integ_exact = log(2.0);

    // Print the values
    printf("The approximate value is : %lf\n", integ_approx);
    printf("The exact value is : %lf\n", integ_exact);
    printf("The difference between the two values is : %lf\n", integ_approx-integ_exact);

    return 0;
}

// Function to convert angle from degrees to radians
double degtorad(double deg) {
    return (M_PI * deg) / 180.0;
}

// Function to calculate the tan values
double traprule(int N) {
    // Declare variables
    int i = 0;
    double width = 0;
    double area = TanVal[0] + TanVal[N];

    for (i = 1; i < N; i++) {
        area += 2. * TanVal[i];
    }

    width = degtorad(60.0) / (2.0 * N);
    area *= width;

    return area;
}
