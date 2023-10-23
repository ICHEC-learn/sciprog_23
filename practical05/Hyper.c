#include <studio.h>
#include <math.h>

arctanh1(double x, int N);
arctanh2(double x);


int main(void) {

    float X;
    float iter = (0.9 - (-0.9))/0.01;
    float T1[(int)iter], T2[(int)inter];

    printf("Enter a real positive number\n");
    scanf("%3f ", &X);

}

arctanh1(double x, int N){
    double sum = 0;
    double delta = 0;
    while (delta > 0.01) {
        delta = (pow(x,2*N+1))/(2*N+1);
        sum += delta;
    }
    return sum;
}

arctanh2(double x) {

    double value;
    value = 0.5*(log(1+x)-log(1-x));
    return value;

}
