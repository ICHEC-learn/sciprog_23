# ReadMe
This repository contains the practical for the module ACM40660 - Scientific Programming (ICHEC).

## Practical03 
### Print.c
This file contains a simple code to print some variables using the function *printf*. The integers are printed using *%d* and the double using *%f*.

    gcc -o Print Print.c
    ./Print

### Area.c
This file calculates the area under the curve for the function *tan(x)* using the Trapezodial rule.  A loop between the two values of interest is created using a small increment. It is possible to calculate the area more accuratly by reducing the increment, but the time of comutation will therefore be increased. The output value is compared with the real value of the area to ensure our calculation is correct. The command to compile this file changes slightly as we use some functions of the *math.h* library. 

    gcc -o Area Area.C -lm
    ./Area

## Practical04
### Tang.c 
This file uses two functions to calculate the values of the tangeante of an angle. The first one converts degrees into radians.  The second uses the same method as Area.c file. The main part creates a loop over the range of angles we are interested in.

	gcc -o Tang Tang.c -lm
	./Tang

## Practical05 
### Fibon.c
This file calls a function to generate the next number in the Fibonnaci sequence. The main part let us enter a positive number *N*. If the number is not greater than 1, then we ask the user again. We then use our function to print each number of the sequence until the *N-th* element.

	gcc -o Fibon Fibon.c -lm
	./Fibon
	
### Hyper.c	
This file contains two method to calulate the values for inverse hyperbolic tangent function. The first one uses a loop over n elements until the value reaches a degree of accuracy set by the user. The second uses a formula using the natural logarithm. In the main part, we compare these two results by printing the values and the difference.

	gcc -o Hyper Hyper.c -lm
	./Hyper

## Practical06 
### Makefile
This file contains informations to compile the next two file at the same time.
	
	make
	make clean (to remove the unnecessary files)

### matmult.c
This file contains one function which reads three integers and three matrices. The matrices are the size of the three integers. We compute the matrix multiplucation of the third one using the first two.

### main.c
This file contains a main part which initialize the the values for three matrices using loops. It then calls the function created in the *matmult.c* file to compute the multiplication. The next three loops are used to print the three matrices.

## Practical07
### exp.c
This file calcultes the approximate value of *e* using a loop and the factorial function. We use dynamical array in this sequence to change the value of the number of order of polynomials. It is essential to allocate memory for the pointers at the begining and free the memory allocated for this pointer.

    gcc -o exp exp.c -lm
    ./exp

### array.c
This file uses multiple function to modify the values inside a array using pointers. The first one allocates memory for the pointer. The second calls the array and fills its values with ones. The third prints the values of the array. The forth frees the memory of the pointer. All of the functions are called inside the main part.

    gcc -o array array.c -lm
    ./array

## Practical08
### gcd.c
This file uses two functions to calculate the greatest common divisor between two numbers given by the user. The code does not stop asking for two number until they are integers using a function. The first one uses a loop. The second calls the same functions. They both stop once a condition is filled *b=0*. 

    gcc gcd gcd.c -lm
    ./gcd

## Practical09 
### magic_square_.txt
This file contains a 3x3 magic square matrix.

### not_magic_square.txt
This file contains 3x3 matrix but it is not a magic square.

### magic_square.h
This file contains a function to check if a given matrix is magic or not. It first checks if the sum of the elements of each rows and columns are equal to the magic number. Then, it checks if the sum of the elements of the two diagonals are equal to the magic number.It returns one if all these conditions are passed. Returns zero otherwise. 

### main.c
This file opens the content of a given *.txt* file entered by the user. If the file does not exist, an error is printed. Memory is allocated to each row of the matrix. Loops are implemented to read each element of the file and store it inside pointers. The function defined in the other file is called and the results is printed. The memory is freed for each row corresponding to each pointer.

    gcc -o main main.c -lm
    ./main