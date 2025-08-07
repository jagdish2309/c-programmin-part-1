// Factorial Program in C:-
// Given a number N, the task is to find the factorial of it. A factorial is the product of all the natural
//  numbers less than or equal to the given number N.

// Examples:-
// Input: N = 5
// Output: 120
// Explanation: 5! = 5 × 4 × 3 × 2 × 1 = 120

// Input: N = 0
// Output: 1
// Explanation: 0! = 1 by definition

// Find Factorial Using a Loop
// The simplest way to find the factorial of a number N is by using a loop to repeatedly multiply the 
// numbers from 1 to N and store the result in a variable.

// code:-

#include <stdio.h>

unsigned int factorial(unsigned int N) {
    int fact = 1, i;

    // Loop from 1 to N to get the factorial
    for (i = 1; i <= N; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int N = 5;
    int fact = factorial(N);
    printf("Factorial of %d is %d", N, fact);
    return 0;
}

// Output:-
// Factorial of 5 is 120