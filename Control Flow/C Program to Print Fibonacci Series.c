// C Program to Print Fibonacci Series:-

// explanation:-
// The Fibonacci series is the sequence where each number is the sum of the previous two numbers of the sequence. 
// The first two numbers are 0 and 1 which are used to generate the whole series.

// Example:-

// Input: n = 5
// Output: 0 1 1 2 3
// Explanation: The first 5 terms of the Fibonacci series are 0, 1, 1, 2, 3.

// Input: N = 7
// Output: 0 1 1 2 3 5 8
// Explanation: The first 7 terms of the Fibonacci series are 0, 1, 1, 2, 3, 5, 8.

// Print Fibonacci Series Using Loops
// We can use one of the C loops to iterate and print the given number of terms. The first two terms,
//  F1 and F2 should be handled separately. After that, we can use two variables to store the previous two terms and print
//   the current term by adding these two. We have to keep updating the previous terms as we move to print the next term in the series.

// code:-

// C Program to print the fibonacci series using loops
#include <stdio.h>

void printFib(int n) {
  
  	// If the number of terms is smaller than 1
    if (n < 1) {
        printf("Invalid Number of terms\n");
        return;
    }
  
  	// First two terms of the series
    int prev1 = 1;
    int prev2 = 0;

    // for loop that prints n terms of fibonacci series
    for (int i = 1; i <= n; i++) {
      	
      	// Print current term and update previous terms
        if (i > 2) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf("%d ", curr);
        }
		else if (i == 1)
            printf("%d ", prev2);
        else if (i == 2)
            printf("%d ", prev1);
    }
}

int main() {
    int n = 9;
  
  	// Printing first n fibonacci terms
    printFib(n);
    return 0;
}

// Output:-
// 0 1 1 2 3 5 8 13 21 