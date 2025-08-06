// Examples:-
// Input: a = 5, b = 3
// Output: 8
// Explanation: The sum of 5 and 3 is 8.
// Input: a = -2, b = 7
// Output: 5
// Explanation: The sum of -2 and 7 is 5.

// 1. Adding Two Numbers using + Operator:-
// code:-
// C program to add two numbers
#include <stdio.h>

int main() {
    int a, b, sum = 0;
  
  	// Read two numbers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate the addition of a and b
    // using '+' operator
    sum = a + b;
    printf("Sum: %d", sum);
    return 0;
}

// Output:-
// Enter two integers: 5 3
// Sum: 8