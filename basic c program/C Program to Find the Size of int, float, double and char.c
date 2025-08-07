// Examples:-

// Input: char
// Output: Size of char: 1 byte

// Input: int
// Output:Size of int: 4 bytes

// Different Methods to Find the Size of int, float, double and char in C

// 1. Using sizeof() Operator Directly
// In C, we have sizeof() operator that can find the size of the data type that is provided as the argument. We can use this 
// operator to find the size of int, char, float and double by passing them as parameters.

// Syntax of sizeof():-
// sizeof(data_type);

// code:-
// C Program to Find the Size of int, float, double, and
// char using sizeof operator directly
#include <stdio.h>

int main() {
  
    // Determine and Print the size of int
    printf("Size of int: %u bytes\n", sizeof(int));

    // Determine and Print the size of float
    printf("Size of float: %u bytes\n", sizeof(float));

    // Determine and Print the size of double
    printf("Size of double: %u bytes\n", sizeof(double));

    // Determine and Print the size of char
    printf("Size of char: %u bytes\n", sizeof(char));

    return 0;
}

// Output:-
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Size of char: 1 bytes

// 2. Using sizeof Operator on Variables
// The sizeof operator does not only works on the data types, but also on the variables of these data types. We just need 
// to pass the variable name instead of type.

// code:-
// C program to find the size of int, char,
// float and double data types
#include <stdio.h>

int main() {
  
  	// Variables of int, char, float and double
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    // Determine and Print  the size of integer type
    printf("Size of int is: %u bytes", sizeof(integerType));

    // Determine and Print the size of floatType
    printf("\nSize of float is: %u bytes", sizeof(floatType));

    // Determine and Print the size of doubleType
    printf("\nSize of double is: %u bytes", sizeof(doubleType));

    // Determine and Print the size of charType
    printf("\nSize of char is: %u bytes", sizeof(charType));

    return 0;
}

// Output:-
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Size of char: 1 bytes