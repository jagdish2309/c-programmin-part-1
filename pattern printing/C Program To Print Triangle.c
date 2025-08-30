// C Program To Print Triangle:-
// Here, we will see how to print a triangle using the C program
// Input:-
// 5

// Output:-
// * 
// * * 
// * * * 
// * * * * 
// * * * * *  

// Approach: -
// The approach is very simple. We just execute a nested loop, and only print characters when the inner loop is executed after that just change the line.

// code:-
// C program to print a triangle
#include <stdio.h>

// Driver code
int main()
{
    int n = 6;

    // ith row has i elements
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Output:-
// *
// **
// ***
// ****
// *****
// ******