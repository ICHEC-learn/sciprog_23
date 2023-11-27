#include <stdio.h>
#include <math.h>

// Functions declarations
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(void) {

    // Variables declarations and initialization
    double delta = 1e-6;  // Default precision
    double x = -0.9;
    int N = 1000;
    double T1[N], T2[N];
    int j = 0;

    // User Input for delta
    printf("Enter the precision for the MacLaurin Series (positive value): ");
    scanf("%lf", &delta);

    if (delta <= 0) {
        printf("Error: Please enter a positive value for precision.\n");
        return 1; // Exit with an error code
    }

    // Calculate and compare results
    while (j < N) {
        T1[j] = arctanh1(x, delta);
        T2[j] = arctanh2(x);
        printf("The difference at x=%lf between them is %.10lf.\n", x, fabs(T1[j] - T2[j]));
        x += 0.1;
        j++;
    }

    return 0;
}

double arctanh1(const double x, const double delta) {
    double sum = 0;
    double elem, value;
    int n = 0;

    do {
        value = 2 * n + 1;
        elem = pow(x, value) / value;
        sum += elem;
        n++;

    } while (fabs(elem) >= delta);

    return sum;
}

double arctanh2(const double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}
