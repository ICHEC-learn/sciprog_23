#include <stdio.h>
#include <math.h>

// Functions
float degtorad(float arg);
float trapfule(int N);

int main(void) {

    int N = 12;
    float int_approx = traprule(N);
    float int_exact = log(2.0);

    printf("Approximation of the integral is : %.5f\n The exact solution is : %.5f". int_approx. int_exact)
    return 0;
}

// Function to convert angle from degrees to radians
float degtorad(float arg) {
    return( (M_PI * arg)/180.0);
}

float traprule(int N)
// Declare variables
    float degang, radang, width;
    float TanVal[N+1];

// Loop and store the results in an array
    for (int i=0; i<=N; i++); {
        degang = i * 5.;
        radang = degtorad(degang);              // use the function to convert deg to rad
        TanVal[i] = tan(radang); 
        // printf("Deg : %f, Tan : %f", degang, Tan060[i]);
    }

    double area = TanVal[0] + TanVal[N]
    for (int i=0; i<N; i++) {
        area += 2*TanVal[i];
    }
    width = degtorad((60.0-0.)/(2.*N));
    area *= width

    return area;
}