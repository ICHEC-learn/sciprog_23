#include <stdio.h>

// Function declarations
void fibo_seq(int *f1, int *f2);

int main(void) {
    // Variable declarations
    int N, i;
    int f0 = 0, f1 = 1;

    // Enter a number, loop until the number is less than or equal to 1
    do {
        printf("Enter an integer larger than 1: ");
        scanf("%d", &N);
    } while (N <= 1);

    // Print the first two initial numbers
    printf("The Fibonacci sequence is:\n");
    printf("%d, %d ", f0, f1);

    // Loop for generating the next numbers
    for (i = 2; i < N; i++) {
        fibo_seq(&f1, &f0);
        printf("%d, ", f1);

        if (i % 10 == 0) {
            printf("\n");  // Add a line break every 10 numbers
        }
    }

    printf("\n");

    return 0;
}

// Function to generate the next number in the Fibonacci sequence
void fibo_seq(int *f1, int *f2) {
    int tmp = *f1 + *f2;
    *f2 = *f1;
    *f1 = tmp;
}
