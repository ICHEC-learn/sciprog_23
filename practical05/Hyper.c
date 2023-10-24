#include <stdio.h>
#include <math.h>

// Functions declarations
arctanh1(const double x, const double delta);
arctanh2(const double x);


int main(void) {

    // Variables declarations
    // float iter = (0.9 - (-0.9))/0.01;
    //double T1[(int)iter], T2[(int)inter];
    double delta, x;
    int lenght=1000;
    int N = 1000
    double T1[N], T2[N];

    // User Input for delta
    printf("Enter the precision for the MacLaurin Series\n");
    scanf("%1f ", &delta);

    int j=0; // array index
    x = -0.9 ;
    while (x<=0.9 && j < lenght) {
        tan1[j] = arctanh1(x, delta);
        tan2[j] = arctanh2(x)
        print("The difference at x=%lf between them is %.10lf.
    }






    return 0;

}

arctanh1(const double x, const double delta) {
    double sum = 0;
    double elem, val;
    int n;

    do {
        val = 2*n+1;
        elem = pow(x,val)/val;
        sum += elem;
        n++;

    } while(fabs(elem) > delta)

    return sum;
}

arctanh2(const double x) {
    double value;
    value = 0.5*(log(1+x)-log(1-x));
    return value;

}




