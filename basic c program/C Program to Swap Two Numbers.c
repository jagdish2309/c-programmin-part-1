// C Program to Swap Two Numbers:-
// exxplanation:-Swapping two numbers means exchanging their values. In this article, we will learn how to swap values of two numbers in a C program.

// The easiest method to swap two numbers is to use a temporary variable. First, we assign the value of first variable to 
// temporary variable, then assign the value of second variable to first variable and in the last assign the value of temporary 
// variable to second variable, which is the value of first variable.

// code:-

#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Swapping values of a and  b
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

// Output
// a = 10, b = 5

// Without Using a Temporary Variable:-
// In this method, we use arithmetic operations to swap the values without using a temporary variable.

// code:-

#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Arithmetic operations to swap values
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

// Output
// a = 10, b = 5

// Using Bitwise XOR Operator:-
// We can also use the bitwise XOR operator to swap the values without using a temporary variable.

// code:-

#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Apply XOR operations in the given order
    // to swap values
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

// Output:-
// a = 10, b = 5