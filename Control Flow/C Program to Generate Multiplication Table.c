// C Program to Generate Multiplication Table:-

// explanation:-
// In this article, we are creating a multiplication table in c which is a basic program for printing tables in c. 
// We are printing multiplication tables of the number up to a given range. We will use the concepts of
//  looping and using a 2-D array to print a Multiplication Table. 

// Multiplication Table
// A multiplication table is a table that shows the multiples of a number. A multiplication table is created by multiplying a constant number from 1 to a given range of numbers
//  in repetition order. 

// Input: 
// num = 5 
// range = 10

// Output:
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
// 5 * 7 = 35
// 5 * 8 = 40
// 5 * 9 = 45
// 5 * 10 = 50

// Program to Print Multiplication Table in C
// There are two approaches for printing tables in c

// i) Using loops and without storing them in an array
// ii) Using loops and a 2-D array

// 1. Using loops and without storing them in an array 
// The idea is to use the concept of looping and directly print the multiplication table without storing them in an array.

// Algorithm:

// - Take the input of the number and the range of the multiplication table.
// - Declare a variable to store the product.
// - Use a for loop to directly multiply and print the Multiplication table.

// code:-

// C program to Demonstrate the
// Multiplication table of a number
#include <stdio.h>
void print_table(int range, int num)
{
    // Declaring a variable mul to store the  product.
    int mul;

    // For loop to calculate the Multiplication table.
    for (int i = 1; i <= range; i++) {
        // To store the product.
        mul = num * i;

        // Printing the Multiplication Table.
        printf("%d * %d = %d", num, i, mul);

        // Proceeding to the next line.
        printf("\n");
    }
}
// Driver code
int main()
{

    // The range of the
    // Multiplication table
    int range = 10;

    // The number to calculate the
    // Multiplication table
    int num = 5;

    // Calling the Function.
    print_table(range, num);

    return 0;
}

// Output:-
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
// 5 * 7 = 35
// 5 * 8 = 40
// 5 * 9 = 45
// 5 * 10 = 50

// 2. Using loops and a 2-D array
// Algorithm:

// Take the input of the number and the range of the multiplication table.
// Now use a for loop(variable "k")is used to traverse the 2-D array, it iterates through 0 to the range.
// The first column stores the number (i.e arr[k][0] = num) .
// The second column stores the value to be multiplied (i.e arr[k][1] = k+1) .
// The third column stores the product (i.e arr[k][2] = arr[k][1] * arr[k][0] ) .
// Then use another loop to print the multiplication table.

// code:-

// C program to demonstrate the
// Multiplication table of a number
#include <stdio.h>
void print_table(int range, int num)
{
    // Taking two integer variables row and column
    int row, col;

    // Initializing row with range of the multiplication
    // table.
    row = range;

    // Initializing column with 3.
    col = 3;

    // Creating a 2-D array to calculate and store the
    // Multiplication Table .
    int arr[row][col];

    // For loop to calculate the table
    for (int k = 0; k < row; k++) {
        // Storing the number in the first column.
        arr[k][0] = num;

        // Storing the value to be multiplied in the second
        // column.
        arr[k][1] = k + 1;

        // Calculating and Storing the product in the third
        // column.
        arr[k][2] = arr[k][1] * arr[k][0];
    }

    // For loop to print the Multiplication table
    for (int i = 0; i < row; i++) {
        printf("%d * %d = %d", arr[i][0], arr[i][1],
               arr[i][2]);
        printf("\n");
    }
}
// Driver code
int main()
{
    // The range of the
    // Multiplication table.
    int range = 10;

    // The number to calculate the
    // Multiplication table.
    int num = 5;

    // Calling the Function.
    print_table(range, num);
    return 0;
}

// Output:-
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
// 5 * 7 = 35
// 5 * 8 = 40
// 5 * 9 = 45
// 5 * 10 = 50