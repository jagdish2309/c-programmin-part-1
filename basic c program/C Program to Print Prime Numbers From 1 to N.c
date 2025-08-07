// C Program to Print Prime Numbers From 1 to N:-

// explanation:-
// Prime numbers are positive integers greater than 1 that have no divisors other than 1 and themselves. In this article, we
//  will learn to generate and display all prime numbers from 1 to N in C programming language.

// Algorithm:-
// 1) Check every number from 1 to N whether it is prime by using isPrime() function.
// 2) In isPrime() Function,
// i) Iterate from 2 to sqrt(N) and check if the number is divisible by any of the values other than itself.
// ii) If it is divisible by any number, it means the number is not prime, return false.
// iii) If it is not divisible by any number, it means the number is prime, return true.
// 3) If isPrime() returns true, print the number.
// 4) Else continue.

// code:-
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

// This function is to check
// if a given number is prime
bool isPrime(int n)
{
    // 0 and 1 are not prime numbers
    if (n == 1 || n == 0)
        return false;

    // Check for divisibility from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Driver code
int main()
{
    int N = 50;

    // Check every number from 1 to N
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Output:-
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 