#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool areint(int x, int y);
int gcd(int x, int y);

int main() {
    int a, b, temp;

    printf("Give two integers : ");
    scanf("%d %d", &a, &b);

    bool result = areint(a, b);
    if (result != 1) {
        printf("The numbers given are not integers");
    }

    printf("GCD between %d, and %d, is : %d \n", a, b, gcd(a,b));
}


int gcd(int x, int y) {
    int temp;

    do {
        temp = y;
        y = x % y;
        x = temp;
    } while (y != 0);

    return x;
}


bool areint(int x, int y) {
    return true;
}
