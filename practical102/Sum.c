#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {   /* Start i at 1 and increse by i value */
      sum1 += 1./i;
      // sum1 = sum1 + 1./i
      
      
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {  /* start i at 1000 and then decrease i */
      sum2 += 1./i;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum1 - sum2; //calculate the difference between sum1 and sum2

   printf(" Difference between the two is %f\n",diff);
   
   return 0; // return 0 is needed 

}
