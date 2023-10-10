### Printf Syntax

```c++
printf("Two ints %d %d and two floats %f %f\n", int1, int2, float1, float2);
```

### Exercices
Using an approximation (trapezoid rule), we can calculte the area under the curve for any given function

1. Set up the range of the integral
2. Divide the range in N-1 smaller range
3. Initialize the value of the integral by the sum of f(a) and f(b)
4. loop from 1 to N, and add to the sum, the function of the iteration
5. Compare the result to a known value