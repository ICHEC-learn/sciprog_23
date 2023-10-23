#include <studio.h>
#include <math.h>

float f1 = 0;
float f2 = 1;

float fibo_series(int n);
float fibo_print(int n);

int main(void) {
    int N=10;
    float fl1, fl2;

    printf("Enter an integer larger than 1\n");
    scanf("%d ", &n);

    fl2, fl1 = fibo_series(N);
    fibo_print(N)
}

float fibo_series(int n) {
    for (int i=0; i<n; i++) {
        f2 = f2 + f1;
        f1 = f2 - f1;
    return f2, f1;
    }
}

void fibo_print(int n) {
    for (int i=0; i<n; i++) {
        f2 = f2 + f1;
        f1 = f2 - f1;
        print(f2)
    return 0;
    }
}