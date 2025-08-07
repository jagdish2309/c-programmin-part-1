// C Program To Find Area And Perimeter of Rectangle:-
// Example:-

// Input:

// l = 10 
// b = 10 
// Output: 
// area = 100 
// perimeter = 40 

// Explanation: 
// The formula for the area of a rectangle is:- Area = length*breadth => l*b 

// The formula for the perimeter of a rectangle is:- 
// Perimeter = 2*(length + breadth) => 2*(l+b) 

// Method 1: 

// C program to demonstrate the
// area and perimeter of rectangle
#include <stdio.h>

int main()
{

    int l = 10, b = 10;
    printf("Area of rectangle is : %d", l * b);
    printf("\nPerimeter of rectangle is : %d", 2 * (l + b));
    return 0;
}

// Output:-
// Area of rectangle is : 100
// Perimeter of rectangle is : 40


// Method 2: 

// C program to demonstrate the
// area and perimeter of rectangle
#include <stdio.h>

int main()
{

    int l = 10, b = 10;
    int A, P;
    A = l * b;
    P = 2 * (l + b);
    printf("Area of rectangle is : %d", A);
    printf("\nPerimeter of rectangle is : %d", P);
    return 0;
}

// Output:-
// Area of rectangle is : 100
// Perimeter of rectangle is : 40
