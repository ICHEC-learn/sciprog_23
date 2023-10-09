#include <stdio.h>
#include <math.h>

float pi;
float degtorad(float arg);

int main(void) {

/* Declare variables */
    int i;
    float degang, radang;
    float Tan060[13];

/* Loop and store the results in an array */
    pi = atanf(1.0)/4.0;

    for (i; i<13; i++);
        degang = i * 5;
        radang = degtorad(i); // use the function descibred below

        Tan060[i] = tan(radang); 

    printf("Deg %f, Tan %f\n");
    return 0;
}

/* Function to convert angle from degrees to radians */
float degtorad(float arg) {
    return( (pi * arg)/180.0 );
}