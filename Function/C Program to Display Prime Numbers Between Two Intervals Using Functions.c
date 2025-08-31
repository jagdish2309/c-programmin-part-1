// C Program to Display Prime Numbers Between Two Intervals Using Functions:-
// explanation:- Prime numbers have only 2 factors, 1 and themselves. For example, 2,3, 5, 7, 9,... are the first 5 prime numbers. Here we will build a C program to display prime numbers between two intervals using functions using 2 approaches, for loop and while loop. 

// Example
// Input: num1 = 2, num2 = 10

// Output: Prime numbers between 2 and 10 are: 2 3 5 7 

// Explanation: The prime numbers between the given intervals 2(starting limit) and 10(ending limit) are 2 3 5 and 7

// Using For Loop

// code:-
// C Program to demonstrate Prime Numbers
// Between Two Intervals Using for 
// loop in a function
#include <stdio.h>

// User-defined function to check 
// prime number
int checkPrimeNumber(int number)
{
    int i, f = 1;
  
    // Condition for finding the
    // prime numbers between the
    // given intervals
    for (i = 2; i <= number / 2; ++i) 
    {
        if (number % i == 0) 
        {
            f = 0;
            break;
        }
    }

    return f;
}

// Driver code
int main()
{
    int num1 = 2, num2 = 10, j, f;

    printf("Prime numbers between %d and %d are: ", 
            num1, num2);
    for (j = num1; j < num2; ++j) 
    {
        // if flag is equal to 1 then
        // it is a prime number
        // calling the function
        f = checkPrimeNumber(j);

        if (f == 1) 
        {          
            // Printing the result
            printf("%d ", j);
        }
    }

    return 0;
}

// Output:-
// Prime numbers between 2 and 10 are: 2 3 5 7

Using While Loop

code:-
// C Program to demonstrate Prime Numbers
// Between Two Intervals Using for
// loop in a function
#include <stdio.h>

int isPrime(int number)
{
    int i;
  
    // condition for finding the
    // prime numbers between the
    // given intervals
    for (i = 2; i <= number / 2; i++) {

        // if the number is divisible 
        // by 1 and self then it
        // is prime number
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Driver code
int main()
{
    int num1 = 2, num2 = 10;

    printf("The prime numbers between %d to %d are: ", 
            num1, num2);

    while (num1 <= num2) 
    {
        // calling the function
        if (isPrime(num1)) 
        {          
            // printing the result
            printf("%d, ", num1);
        }

        num1++;
    }

    return 0;
}

// Output:-
// The prime numbers between 2 to 10 are: 2, 3, 5, 7, 