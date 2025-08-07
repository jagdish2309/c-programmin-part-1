// Leap Year Program in C:-
// explanation:-
// A leap year is a year that contains an additional day in February month i.e. February 29. 
// It means that a leap year has 366 days instead of the usual 365 days. In this article, we 
// will see the program to check for leap year in C.

// Conditions for a Leap Year
// A leap year occurs once every four years and to check whether a year is a leap year, the following conditions should be satisfied:

// It is a multiple of 4 but not of 100, or
// It is a multiple of 400.
// For example, 2000 is a leap year but 1900 is not.

// Algorithm to Check Leap Year in C:-
// IF year % 400 = 0
//    PRINT "Leap Year"
// ELSE IF year % 100 = 0
//    PRINT "Not a Leap Year"
// ELSE IF year % 4 = 0
//    PRINT "Leap Year"
// END IF
// PRINT "Not a Leap Year"

// code:-

// C program to check if a given
// year is leap year or not
#include <stdbool.h>
#include <stdio.h>

bool checkYear(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;

    // Else If a year is multiple of 100,
    // then it is not a leap year
    else if (year % 100 == 0)
        return false;

    // Else If a year is multiple of 4,
    // then it is a leap year
    else if (year % 4 == 0)
        return true;
    // if no above condition is satisfied, then it is not
    // a leap year
    return false;
}

// Driver code
int main()
{
    int year = 2000;

    if (checkYear(year)) {
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    return 0;
}

// Output:-
// Leap Year