#include <stdio.h>

// Function declarations
void generateNextFibonacciNumber(int *current, int *previous);

int main(void) {
    // Variable declarations and initialization
    int N = 0;  // Initialize to a default value
    int i = 0;
    int f0 = 0, f1 = 1;

    // Enter a number, loop until the number is less than or equal to 1
    do {
        printf("Enter an integer larger than 1: ");
        scanf("%d", &N);
    } while (N <= 1);

    // Print the first two initial numbers
    printf("The Fibonacci sequence is:\n");
    printf("%d, %d, ", f0, f1);

    // Loop for generating the next numbers
    for (i = 2; i < N; i++) {
        generateFibonacci(&f1, &f0);
        printf("%d", f1);

        if (i % 10 == 0) {
            printf("\n");
        } else {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}

// Function next Fibonacci number
void generateFibonacci(int *a, int *b) {
    int tmp = *a + *b;
    *b = *a;
    *a = tmp;
}
