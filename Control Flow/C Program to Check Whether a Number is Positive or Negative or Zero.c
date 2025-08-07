// C Program to Check Whether a Number is Positive or Negative or Zero:-

// Examples:-
// Input: 10
// Output: Positive
// Explanation: Since 10 is greater than 0, it is positive.
// Input: -5
// Output: Negative
// Explanation: Since -5 is less than 0, it is negative.

// Different Ways to Check for Positive Numbers, Negative Numbers, or Zero in C:-
// 1. Using Conditional Statements Like if-else
// The idea is to use simple if-else-if ladder to check for the equality manually.
//  First use if statement for zero, then else if statement of less than zero numbers
//   (negative) and finally if nothing matches, then it is positive numbers.

// code:-
// C Program to check if a number is positive, negative,
// or zero using simple conditional checks
#include <stdio.h>

void checkNum(int N) {
  
    // Check if the number is zero
    if (N == 0) {
        printf("Zeri\n");
    }
    // Check if the number is less than zero
    else if (N < 0) {
        printf("Negative\n");
    }
    // If neither, the number is positive
    else {
        printf("Positive\n");
    }
}

int main() {
    int N = 10;
    checkNum(N);
    return 0;
}

// Output:-
// Positive

// 2. Using Bit Operators:-
// The most significant bit (MSB) in the binary representation of an integer is the sign bit. For positive numbers, 
// the sign bit is 0, and for negative numbers, the sign bit is 1. By extracting the MSB from the number,
//  we can determine the sign of the given number. For zero, we have to check it in the same way as 
//  previous method.

//  code:-
 // C Program to check if a number is positive, negative,
// or zero using bitwise operators
#include <stdio.h>

void checkNum(int N) {

    // Check if the number is zero
    if (N == 0) {
        printf("Zero\n");
        return;
    }

    // Extracting msb
    int msb = N & (1 << (sizeof(int) * 8 - 1));

    if (msb)
        printf("Negative\n");
    else
        printf("Positive\n");
}

int main() {
    int N = 10;
    checkNum(N);
    return 0;
}

// Output:-
// Positive