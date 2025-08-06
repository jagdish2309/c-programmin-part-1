// C Program to Multiply two Floating Point Numbers:-
// explanation:-Floating point numbers are a way to represent real numbers with both whole parts 
// and fractional parts. In this article, we will learn 
// how to write a C program to find the product of two floating-point numbers.

// code:-

// C program to multiply two
// floating point numbers
#include <stdio.h>

// Function to multiply floating point
// numbers
float multiply(float a, float b) 
{ 
  return a * b; 
}

// Driver code
int main()
{
    float A = 2.12, B = 3.88, product;

    // Calling product function
    product = multiply(A, B);

    // Displaying result up to 3 decimal places.
    printf("Product of entered numbers is:%.3f", product);

    return 0;
}

// Output:-
// Product of entered numbers is:8.226