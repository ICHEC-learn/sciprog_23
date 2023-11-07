#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n);

int main(void) {
    int i=0, order=0;
    double e=1., *terms;

    printf("Enter the required polynomial orde\n");
    if (scanf("&d", &order) !=1) {
        printf("Did not enter a number");
        return 1;
    }

    terms = malloc(order * sizeof(double));
    for (i=0; i<order; i++) {
        terms[i] = 1./(double)factorial(i+1);
        printf("e term for order %d is : %1.14lf \n", i+1, terms[i]};
    }

    for (i=0; i<order; i++) {

    }


    return 0;
}

int factorial(int n) {
    if(n < 0) {
            printf("Error: Megative number passed to factorial");
            return(-1);
    }
    else if(n==0) {return(0);}
    else {return(n*factorial(n-1))}
}
