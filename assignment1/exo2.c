#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declare the functions
double Sn1(double a, double r, int n);
double Sn2(double a, double r, int n);

int main() {
    // Declare and Initialize the variables
    int choice;
    double A, R = 0;
    int N = 0;
    double Sum1, Sum2 = 0;
    double Diff, RelDiff = 0;

    // Ask the user to choose between three differents values for a, r and n
    printf("Select the values of the geometric series: \n");
    printf("1. n = 10000, a = 2.0, r = 0.01 \n");
    printf("2. n = 500, a = 0.01, r = 1.1 \n");
    printf("3. n = 100, a = 0.0001, r = 2.0 \n");
    scanf("%d", &choice);

    // Switch structure
    switch (choice) {
        case 1:
            N = 10000;
            A = 2.0;
            R = 0.01;
            break;
        case 2:
            N = 500;
            A = 0.01;
            R = 1.1;
            break;
        case 3:
            N = 100;
            A = 0.0001;
            R = 2.0;
            break;
    }

    // Use the functions below
    Sum1 = Sn1(A,R,N);
    Sum2 = Sn2(A,R,N);

    // Compute the difference and relative difference between the two sums
    Diff = Sum2 - Sum1;
    RelDiff = fabs(Sum1 - Sum2) / ((Sum1 + Sum2) / 2);

    // Print the sums
    printf("The sum of the geometric series using the first method is : %e\n", Sum1);
    printf("The sum of the geometric series using the second method is : %e\n", Sum2);

    // if the sums are the same, print it
    if (Sum2 == Sum1) {
        printf("The values of the sums are equal");
    }
    // if the sums are different, print the differences
    else {
        printf("The difference between the two values is : %e\n", Diff);
        printf("The relative difference between the two values is : %e\n", RelDiff);
    }
    return 0;
}

double Sn1(double a, double r, int n) {
    // Calculates the first sum using a,r and n

    // Declare and Initialize the variables
    double sum=0;
    int i = 0;

    // Loop over the n values
    for (i=0; i<=n; i++){
        sum += a * pow(r,i);
    }

    return sum;
}

double Sn2(double a, double r, int n) {
    // Calculates the first sum using a,r and n

    // Declare and Initialize the variables
    double num, den, sum = 0;

    // Computes the numerator and denumerator separatly
    num = a * (1 - pow(r,n+1));
    den = 1 - r;
    sum = num / den;

    return sum;
}

// For case 1 :
// Difference = 4.440892e-16
// Relative Difference = 2.198242e-16
// For case 2 :
// Difference = 8.192000e+03
// Relative Difference = 1.498493e-16
// For case 3 :
// Difference = 3.435974e+10
// Relative Difference = 1.355253e-16

// We can see that the relative difference remain the same no matter the changes in
// a, r or n.
