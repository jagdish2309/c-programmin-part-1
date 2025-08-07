// C Program to Calculate Sum of Natural Numbers:-

// Here we will build a C program to calculate the sum of natural numbers using 4 different approaches i.e.

// i) Using while loop
// ii) Using for loop
// iii) Using recursion
// iv) Using Functions
// We will keep the same input in all the mentioned approaches and get an output accordingly.

// Input: 
// n = 10
// Output: 
// 55 
// Explanation: The sum of natural numbers up to a given number is 0+1+2+3+4+5+6+7+8+9+10=55

// Approach 1: Using while loop :-
// The while loop executes the statements until the condition is false

// code:-

// C Program to demonstrate 
// Sum of Natural Numbers
// using while loops

#include <stdio.h>
int main()
{
    int i, s = 0;
    int n = 10;
    i = 1;
  
    // while loop executes 
    // the statements until the
    // condition is false
    while (i <= n) {
      
        // adding natural numbers 
        // up to given number n
        s += i;
        i++;
    }
    // printing the result
    printf("Sum = %d", s);
    return 0;
}

// Output:-
// Sum = 55

// Approach 2: Using for loop
// For loop iterates up to n number of times.

// code:-
// C Program to demonstrate 
// Sum of Natural Numbers
// using for loops
#include <stdio.h>

int main()
{

    int i, s = 0;
    int n = 10;

    for (i = 0; i <= n; i++) {
      
        // adding natural numbers 
        // up to given number n
        s += i;
    }
  
    // printing the result
    printf("Sum = %d", s);
    return 0;
}

// Output:-
// Sum = 55

// Approach 3: Using recursion

// CODE:-
// C Program to demonstrate 
// Sum of Natural Numbers
// using recursion
#include <stdio.h>

int sumofnaturalnumbers(int num)
{
    if (num != 0)
      
        // adding natural numbers up to given number n
        return num + sumofnaturalnumbers(num - 1);
    else
        return num;
}

int main()
{

    int number = 10;
  
    // printing the result
    printf("Sum = %d", sumofnaturalnumbers(number));
  
    return 0;
}

// Output:-
// Sum = 55
