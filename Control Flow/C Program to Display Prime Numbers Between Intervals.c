// C Program to Display Prime Numbers Between Intervals

// explanation:-Given two numbers a and b as interval range, the task is to find the prime numbers in between this interval.

// Examples: 
// Input: a = 1, b = 10
// Output: 2, 3, 5, 7
// Input: a = 10, b = 20
// Output: 11, 13, 17, 19

// Approach 1:
// In the below program, the range of numbers is taken as input and stored in the variables 'a' and 'b'.
//  Then using for-loop, the numbers between the interval of a and b are traversed. For each number in the for loop,
// it is checked if this number is prime or not. If found prime, print the number. Then the next number in the
//  loop is checked, till all numbers are checked.

// Program: 

// C Program to Display Prime 
// Numbers Between Intervals 
#include <stdio.h>

// Driver code
int main()
{
    // Declare the variables
    int a, b, i, j, flag;

    // Ask user to enter lower value 
    // of interval
    printf("Enter lower bound of the interval: ");

    // Take input
    scanf("%d", &a); 

    // Ask user to enter upper value 
    // of interval
    printf("Enter upper bound of the interval: ");

    // Take input
    scanf("%d", &b); 

    // Print display message
    printf("Prime numbers between %d and %d are: ", 
            a, b);

    // Traverse each number in the interval
    // with the help of for loop
    for (i = a; i <= b; i++) 
    {
        // Skip 0 and 1 as they are
        // neither prime nor composite
        if (i == 1 || i == 0)
            continue;

        // flag variable to tell
        // if i is prime or not
        flag = 1;

        for (j = 2; j <= i / 2; ++j) 
        {
            if (i % j == 0) 
            {
                flag = 0;
                break;
            }
        }

        // flag = 1 means i is prime
        // and flag = 0 means i is 
        // not prime
        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
}

// Output: 
// Enter lower bound of the interval: 1
// Enter upper bound of the interval: 10
// Prime numbers between 1 and 10 are: 2 3 5 7 

// Approach 2:
// If a number ‘n’ is not divided by any number less than or equals to the square root of n then, it will not be divided by any other 
// number greater than the square root of n. So, we only need to check up to the square root of n.

// program:
// C Program to Display Prime
// Numbers Between Intervals
#include <stdbool.h>
#include <stdio.h>

// function to check if a given number is prime
bool isPrime(int n)
{
    // since 0 and 1 is not prime return false.
    if (n == 1 || n == 0)
        return false;

    // Run a loop from 2 to square root of n.
    for (int i = 2; i * i <= n; i++) {
        // if the number is divisible by i, then n is not a
        // prime number.
        if (n % i == 0)
            return false;
    }
    // otherwise, n is prime number.
    return true;
}

// Driver code
int main()
{
    // lower value of interval
    int a = 1;

    // upper value of interval
    int b = 10;

    // Print display message
    printf("Prime numbers between %d and %d are: ", a, b);

    // Traverse each number in the interval
    // with the help of for loop
    for (int i = a; i <= b; i++) {
        // If the number is prime print it
        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}
// This code is contributed by Susobhan Akhuli

// Output:
// Prime numbers between 1 and 10 are: 2 3 5 7 