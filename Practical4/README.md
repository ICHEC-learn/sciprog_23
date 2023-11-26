# Trapezoidal Rule Approximation for tan(x)

This C program approximates the integral of tan(x) from 0 to 60 degrees using the Trapezoidal Rule. The code calculates the numerical approximation and compares it with the actual value obtained from log(2).

## Compilation and Running Instructions

1. **Compile the Program:**
   - Open a terminal.
   - Navigate to the directory containing the C file (`practical4.c`).
   - Compile the program using gcc:
     ```bash
     gcc -o prog filename.c -lm
     ```
     Note: The `-lm` flag is used to link the math library.

2. **Run the Program:**
   - Execute the compiled binary:
     ```bash
     ./prog
     ```

3. **Expected Output:**
   - The program will display the values of tan(x) for each degree, the approximation of the integral using the Trapezoidal Rule, and the actual value of the integral.
