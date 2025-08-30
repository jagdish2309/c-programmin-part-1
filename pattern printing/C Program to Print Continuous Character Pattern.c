// C Program to Print Continuous Character Pattern:-
// Here, we will see how to print continuous character patterns using a C program. Below are the examples:

// Input: rows = 5
// Output:  
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 





// Input: rows = 3

// Output:
// A 
// B C 
// D E F 



// There are 2 ways to print continuous character patterns in C:

// 1. Using for loop.
// 2. Using while loop.
// Let's discuss each of these in detail.

// 1. Using for loop
// Approach 1: Using Character

// 1) Assign any character to one variable for the printing pattern. 
// 2) The first for loop is used to iterate the number of rows.
// 3) The second for loop is used to repeat the number of columns. 
// 4) Then print the character based on the number of columns and increment the character value at each column to print a continuous character pattern.

// code:-
// C program to print continuous 
// character pattern using
// character
#include <stdio.h>
int main() 
{    
    int i, j;
  
    // Number of rows
    int rows = 3;
  
    // Taking first character of alphabet
    // which is useful to print pattern
    char character = 'A';
  
    // This loop is used to identify 
    // number rows
    for (i = 0; i < rows; i++) 
    {
        // This for loop is used to 
        // identify number of columns 
        // based on the rows
        for (j = 0; j <= i; j++) 
        {
            // Printing character to get 
            // the required pattern
            printf("%c ",character);
          
            // Incrementing character value so 
            // that it will print the next character
            character++;
        }
        printf("\n");
    }
    return 0;
}

// Output:-
// A 
// B C 
// D E F 

// Approach 2:  Converting a given number into a character

// 1) Assign any number to one variable for the printing pattern. 
// 2) The first for loop is used to iterate the number of rows.
// 3) The second for loop is used to repeat the number of columns. 
// 4) After entering into the loop convert the given number in to character to print the required pattern based on the number of columns and increment the character value at each column to print a continuous character pattern. 

// code:-
// C program to print continuous 
// character pattern by converting 
// number in to character
#include <stdio.h>

// Driver code
int main() 
{    
    int i, j;
  
    // Number of rows
    int rows = 5;
  
    // Given a number
    int number = 65;
  
    // This loop is used to identify
    // number of rows
    for (i = 0; i < rows; i++) 
    {
        // This loop is used to identify number
        // of columns based on the rows
        for (j = 0; j <= i; j++) 
        {
            // Converting number in to character
            char character = (char)(number);
          
            // Printing character to get the 
            // required pattern
            printf("%c ", character);
          
            // Incrementing number value so 
            // that it will print the next 
            // character
            number++;
        }
        printf("\n");
    }
    return 0;
}

// Output:-
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 

// 2. Using while loop:
// Approach 1: Using character

// The while loops check the condition until the condition is false. If the condition is true then enter into a loop and execute the statements. Below is the C program to print continuous character patterns using character:

// code:-
// C program to print the continuous 
// character pattern using while loop
#include <stdio.h>

// Driver code
int main() 
{    
    int i = 1, j = 0;
  
    // Number of rows
    int rows = 5;
  
    // Given a character
    char character = 'A';
  
    while (i <= rows) 
    {
        while (j <= i - 1) 
        {
            // Printing character to get 
            // the required pattern
            printf("%c ",character);
            j++;
          
            // Incrementing character value 
            // so that it will print the next 
            // character
            character++;
        }
        printf("\n");

        j = 0;
        i++;
    }
    return 0;
}

// Output:-
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 

// Approach 2: Converting a given number into a character

// Below is the C program to print a continuous character pattern by converting a given number into a character using a while loop:

// code:-
// C program to print continuous 
// character pattern by converting 
// number in to character
#include <stdio.h>

// Driver code
int main() 
{    
    int i = 1, j = 0;
  
    // Number of rows
    int rows = 5;
  
    // Given a number
    int number = 65;
  
    while (i <= rows) 
    {
        while (j <= i - 1) 
        {
            // Converting number in to character
            char character = (char)(number);
          
            // Printing character to get the 
            // required pattern
            printf("%c ",character);
            j++;
          
            // Incrementing number value so 
            // that it will print the next 
            // character
            number++;
        }
        printf("\n");

        j = 0;
        i++;
    }
    return 0;
}

// Output:-
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
