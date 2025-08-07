// C program to Find the Largest Number Among Three Numbers:-

// Examples

// Input: a = 10, b = 22, c = 19
// Output: 22 is the largest number.
// Explanation: Among the numbers 5, 8, and 3, the largest number is 8.

// Input: a = 12, b = 7, c = 9
// Output: 12 is the largest number.
// Explanation: Among the numbers 12, 7, and 9, the largest number is 12.

// Finding the Largest Number Among Three Numbers in C?
// The basic method to find the largest number among three numbers is by using an if statement to compare the numbers with each other in pairs. Let's consider three numbers a, b, and c:

// - Check if a is greater than b and a is also greater than c. If both conditions are true, a is the largest.
// - Otherwise, c is the largest.
// - If a is not greater than b and b is greater than or equal to c, b is the largest.
// - Otherwise, c is the largest.

// code:-
// C program to find the largest number among three number
// using nested if-else
#include <stdio.h>

int main()
{
    int c = 10, b = 22, a = 9;

    // Finding largest by comparing using relational operators
    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.", a);
        else
            printf("%d is the largest number.", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

    return 0;
}

// Output:-
// The numbers A, B and C are: 10, 22, 9
// 22 is the largest number.

// Other Different Methods to Find the Largest of Three Numbers:-

// 1. Using Compound Expression in if-else
// We can compare a number with other two number in a single if statement using AND operator. 
// It allows us to combine the two relational expressions from the above program making the program 
// concise.

// code:-
// C program to find the maximum number out of the three
// given numbers using if-else statement
#include <stdio.h>

int main() {
    int a = 11, b = 2, c = 9;

    // Finding max using compound expressions
    if (a >= b && a >= c)
        printf("%d is the largest number.", a);
    else if (b >= a && b >= c)
        printf("%d is the largest number.", b);
    else
        printf("%d is the largest number.", c);

    return 0;
}

// Output:-
// The numbers A, B and C are: 10, 22, 9
// 22 is the largest number.

// 2. Using Temporary Variable
// In this method, we assume one of the numbers as maximum and assign it to a temporary variable. 
// We then compare this temporary variable with the other two numbers one by one and if the max is
//  smaller than the compared number, we assign the compared number to the max.

//  code:-

 // C Program to Find the Largest Number Among Three using
// Temporary Variable
#include <stdio.h>
int main() {
    int a = 10, b = 22, c = 9;

    // Assume a is the largest
    int max = a;

    // If b is larger than max
    if (max < b)
        max = b;

    // If c is larger than max
    if (max < c)
        max = c;

    printf("%d is the largest number.", max);
    return 0;
}

// Output:-
// The numbers A, B and C are: 10, 22, 9
// 22 is the largest number.

