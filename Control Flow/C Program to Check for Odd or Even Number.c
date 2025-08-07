// C Program to Check for Odd or Even Number:-

// explanation:-
// - Write a C program to check whether the given number is an odd number or an even number.

// A number that is completely divisible by 2 is an even number and a number that is not completely 
// divisible by 2 leaving a non-zero remainder is an odd number.

// Example:-

// Input: N = 4
// Output: Even
// Explanation: 4 is divisible by 2 with no remainder, so it is an even number.

// Input: N = 7
// Output: Odd
// Explanation: 7 is not completely divisible by 2 leaving 1 as remainder, so it is an odd number.

// How to Check Odd or Even Number in C?
// In C, there are three different methods which we can use to check if the given number is an odd number or an even number:

// How to Check Odd or Even Number in C?
// In C, there are three different methods which we can use to check if the given number is an odd number
//  or an even number:

// 1. Check Odd or Even Number Using Modulo Operator
// The simplest way to check whether the given number is even or odd is to check for the remainder when the number is divided by 2. In C, the remainder of a number divided by another number
//  is given by the modulus operator (%).

// code:-
// C Program to Check Even or Odd Using Modulo Operator
#include <stdio.h>

void checkOddEven(int N) {
  
    // Find the remainder
    int r = N % 2;

    // Condition for even
    if (r == 0)  {
        printf("Even");
    }
  
    // Condition for odd number
    else  {
        printf("Odd");
    }
}

int main() {
    int N = 101;
    checkOddEven(N);
    return 0;
}

// Output:-
// Odd

// 2. Check Odd or Even Number Using Bitwise AND Operator
// In odd numbers binary representation, the least significant bit (LSB) of the number is always set i.e. 
// always 1 while for even numbers, it is always unset i.e. 0. We can use this property to extract the 
// LSB using the bitwise AND operator (&) to check the least significant bit (LSB) of the number.

// Below are the steps to implement the above approach:

// - Use the bitwise AND operator on the given number with mask = 1 to extract the LSB of the number.
// - If the result is 0, the given number is even.
// - If the result is 1, the given number is odd.

// code:-
// C Program to Check Even or Odd Using Bitwise
// AND Operator
#include <stdio.h>

void checkEvenOdd(int N) {
  
    // Check if the number is even or odd using bitwise
  	// AND operator
    if (N & 1) {
        printf("Odd\n");
    }
    else {
        printf("Even\n");
    }
}

int main() {
    int N = 7;
  	checkEvenOdd(N);
    return 0;
}

// Output:-
// Odd