// C Program to Make a Simple Calculator:-
// explanation:-
// A simple calculator is a program that can perform addition, subtraction, multiplication, and division 
// of two numbers provided as input. In this article, we will learn to create a simple calculator program in C.

// Example:-
// Input: a = 10, b = 5, op = +
// Output: 15.00
// Explanation: Chosen operation is addition, so 10 + 5 = 15

// Input: a = 12, b = 3, op = /
// Output: 4.00
// Explanation: The chosen operation is division, so 12 / 3 = 4

// Using switch Statement
// The switch statement in C is a clean and efficient way to write a conditional code which provides an 
// easy way to write a C program for a simple calculator. Four switch cases can be defined for four 
// operations: addition, subtraction, multiplication, and division, based on the input operator. When
// the user inputs an operator, the switch statement tests the input against these cases. 
// (i.e., +, -, *, /), and the corresponding operation is executed, and the result is returned.

// code:-

// C Program to make a Simple Calculator using 
// switch-case statements
#include <stdio.h>
#include <float.h>

int main() {
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    
    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
         res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        res = -DBL_MAX;
    }
    if(res!=-DBL_MAX)
      printf("%.2lf", res);
    
    return 0;
}

// Output:-
// 15.00

// Using if-else Statement
// The if-else if ladder is an alternative but more complex way to create a C program for a simple calculator. 
// The idea is to use a series of if-else-if statements to check the vale of the input operator, perform
//  the corresponding operation. and return the result.

// code:-

// C Program to implement a Simple Calculator 
// using if-else statements
#include <float.h>
#include <stdio.h>

int main() {
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    // Perform the operation corresponding to the
    //  given operator
    if (op == '+')
        res = a + b;
    else if (op == '-')
        res = a - b;
    else if (op == '*')
        res = a * b;
    else if (op == '/')
        res = a / b;
    else {
        printf("Error! Operator is not correct.\n");
        res = -DBL_MAX;
    }
  
    if (res != -DBL_MAX)
        printf("Result: %.2lf\n", res);

    return 0;
}

// Output:-
// 4.00