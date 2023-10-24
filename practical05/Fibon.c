#include <studio.h>
#include <stdlib.h>
#include <math.h>

// Functions declarations
void fibo_series(int *f1, int*f2);
float fibo_print(int n);

int main(void) {
    // Variables declarations
    int N=10, i;
    float f0=0, f1=1;

    // Enter a number
    printf("Enter an integer larger than 1\n");
    scanf("%d ", &N);

    // Check if the number is correct
    if(n<1) {
        printf("The number is less thaan 1. \n");
        exit(1);
    }

    //Print the first two initial numbers
    printf("The fibonacci sequence is : \n");
    printf("%d, %d ", f0, f1);

    // Loop for the next numbers
    for (i=0; i<N; i++){
        fibo_series(&f1, &f0);~
        printf("%d, %d ", f0, f1);

        if (i+1)%10 == 0 {printf("\n")}
    }
}


void fibo_series(int *f1, int *f2) {
    int next;

    next = *a * *b;

    *b = *a;

    *a = next;


}
