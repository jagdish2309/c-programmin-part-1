// C Program To Find Simple Interest:-
// explanation:-
// Simple Interest is the interest paid on the principal amount for which the interest earned regularly
//  is not added to the principal amount.

// Examples:-
// Input: Principal = 1000, Rate = 5, Time = 2
// Output: Simple Interest = 100

// Input: Principal = 2000, Rate = 3.5, Time = 4
// Output: Simple Interest = 280

// How to Find Simple Interest in C?
// To find the simple interest in the C programming language, we can directly implement the simple 
// interest formula with the required values such as rate, time, and principal amount as 
// input since there is no built-in C function to calculate it directly.

// Simple Interest Formula:-
// Simple Interest = Principal * Rate * Time​ / 100

// code:-
// C program to find the simple interest
#include <stdio.h>

int main() {
  
    // Input values
    float P = 1, R = 1, T = 1;

    // Calculate simple interest
    float SI = (P * T * R) / 100;

    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

    return 0;
}

// Output:-
// Simple Interest = 0.010000