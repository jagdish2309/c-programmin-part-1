// How to Read and Print an Integer Value in C
// 1. Printing Integer values in C

// Approach:
// 1. Store the integer value in the variableOfIntType x.
// 2. Print this value using the printf() method. The printf() method, in C, prints the value passed as the parameter to it, on the console screen. 

// Syntax:
// printf("%d", variableOfIntType);

// code:-
// C Program to Print
// Integer value
#include <stdio.h>

// Driver code
int main()
{
    // Declaring integer
    int x = 5;

    // Printing values
    printf("Printing Integer value %d", x);
    return 0;
}

// Output:-
// Printing Integer value 5


// 2. Reading Integer values in C

// Approach:
// 1) The user enters an integer value when asked.
// 2) This value is taken from the user with the help of the scanf() method. The scanf() method, in C, reads the value from the console as per the type specified. 
// 3) For an integer value, the X is replaced with the type int. The syntax of the scanf() method becomes as follows then: 

// Syntax:
// scanf("%d", &variableOfIntType);

// code:-
// C program to take an integer
// as input and print it
#include <stdio.h>

// Driver code
int main()
{
    // Declare the variables
    int num;

    // Input the integer
    printf("Enter the integer: ");
    scanf("%d", &num);

    // Display the integer
    printf("Entered integer is: %d", num);

    return 0;
}


// Output:-
// Enter the integer: 10
// Entered integer is: 10