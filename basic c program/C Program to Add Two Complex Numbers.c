// C Program to Add Two Complex Numbers:-
// explanation:-
// Complex numbers are those numbers that can be expressed in the form of "a+ib" where a and b are the real numbers and
//  i is the imaginary part called "iota" The value of i is √-1. In this article, we are going 
//  to add two complex numbers using a C program.

// Example of Add Two Complex Number
// Input:
// a = ( 2 + 3i )
// b = ( 4 + 5i )
// Output:
// Sum = ( 6 + 8i )

// Explanation:   

// = ( 2 + 3i ) + ( 4 + 5i )
// = ( 2 + 4 ) + ( 3 + 5 )i 
// = ( 6 + 8i )
// Approach:-
// The approach is very simple for this program, follow the below steps. 

// 1) Define a structure for complex numbers. 
// 2) Define a function for adding two complex numbers. 
// 3) This function accepts two complex numbers as parameters and returns a complex number.

// code:-
// C program to demonstrate
// addition of complex numbers
#include <stdio.h>

// define a structure for complex number
typedef struct complexNumber {
    int real;
    int img;
} complex;

// This function accepts two complex numbers
// as parameter and return addition of
// them.
complex add(complex x, complex y);

// Driver code
int main()
{
    // Define three complex type numbers
    complex a, b, sum;

    // First complex number
    a.real = 2;
    a.img = 3;

    // Second complex number
    b.real = 4;
    b.img = 5;

    // Print first complex number
    printf("\n a = %d + %di", a.real, a.img);

    // print second complex number
    printf("\n b = %d + %di", b.real, b.img);

    // call add(a,b) function and
    // pass complex numbers a & b
    // as an parameter.
    sum = add(a, b);

    // Print result
    printf("\n sum = %d + %di", sum.real, sum.img);

    return 0;
}

// Complex add(complex x, complex y)
// function definition
complex add(complex x, complex y)
{
    // Define a new complex number.
    complex add;

    // Add real part of a&b
    add.real = x.real + y.real;

    // Add Imaginary part of a&b
    add.img = x.img + y.img;

    return (add);
}

// Output:-
//  a = 2 + 3i
//  b = 4 + 5i
//  sum = 6 + 8i