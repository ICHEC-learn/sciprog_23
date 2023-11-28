#include <stdio.h>
#include <stdlib.h>

// Declare the functions
int *allocate(int n);
void fillwithones(int *array, int n);
void printarray(int *array, int n);
void freearray(int  *array);


int main() {
    // Declare variables
    int n, *a;

    // Ask user
    printf("Size of the array : ");
    scanf("%d", &n);

    // Use the function developped above
    a = allocate(n);

    fillwithones(a, n);
    printarray(a, n);

    freearray(a);

    return 0;
}


// Allocate array
int *allocate(int n) {
    int *p;
    p = (int *) malloc(n * sizeof(int));
    return p;
}

// Fill with ones
void fillwithones(int *array, int n) {
    int i;
    for (i=0;i<n; i++) {
        array[i] = 1;
    }
}

// Print array
void printarray(int *array, int n){
    int i;
    for (i=0;i<n; i++) {
        printf("a[%d] : %d\n", i, array[i]);
    }
}

// Deallocate array
void freearray(int  *array) {
    free(array);
}
