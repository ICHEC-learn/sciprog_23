#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool areint(int x, int y);
int iteration_gcd(int x, int y);
int recursive_gcd(int x, int y);

int main() {
    int a, b;

    printf("Give two integers : ");
    scanf("%d %d", &a, &b);

    bool result = areint(a, b);
    if (result != 1) {
        printf("Error : The numbers given are not integers");
        return 1;
    }

    printf("Using iteration, GCD between %d, and %d, is : %d \n", a, b, iteration_gcd(a,b));
	printf("Using recursion, GCD between %d, and %d, is : %d \n", a, b, recursive_gcd(a,b));

}


int iteration_gcd(int x, int y) {
    int temp;

    do {
        temp = y;
        y = x % y;
        x = temp;
    } while (y != 0);

    return x;
}

int recursive_gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		recursive_gcd(b, a%b);
	}
}



bool areint(int x, int y) {
    return true;
}


