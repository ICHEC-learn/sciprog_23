# Trapezoidal Rule Approximation for f(x) = tan(x)

This C program approximates the integral of f(x) = tan(x) from 0 to π/3 using the Trapezoidal Rule. The code calculates the numerical approximation and compares it with the actual value obtained from log(2).

## Compilation and Running Instructions

1. **Compile the Program:**
   - Open a terminal.
   - Navigate to the directory containing the C file (`trapezoidal_rule.c`).
   - Compile the program using a C compiler (e.g., gcc):
     ```bash
     gcc -o trapezoidal_rule trapezoidal_rule.c -lm
     ```
     Note: The `-lm` flag is used to link the math library.

2. **Run the Program:**
   - Execute the compiled binary:
     ```bash
     ./trapezoidal_rule
     ```

3. **Expected Output:**
   - The program will display the approximation of the integral using the Trapezoidal Rule and the actual value of the integral.





