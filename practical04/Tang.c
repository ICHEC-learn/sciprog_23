#include <stdio.h>
#include <math.h>

// Global variables
int N=12;
float pi;
// Functions
float degtorad(float arg);


int main(void) {

// Declare variables
    int i;
    float degang, radang;
    float Tan060[N];

// Initialize variables
    pi = atanf(1.0)/4.0;

// Loop and store the results in an array
    for (i=0;i<N; i++); {
        degang = i * 5;
        radang = degtorad(degang); // use the function to convert deg to rad
        Tan060[i] = tan(radang); 
        printf("Deg %f, Tan %f", degang, Tan060[i]);
    }

    return 0;
}

// Function to convert angle from degrees to radians
float degtorad(float arg) {
    return( (pi * arg)/180.0 );
}
