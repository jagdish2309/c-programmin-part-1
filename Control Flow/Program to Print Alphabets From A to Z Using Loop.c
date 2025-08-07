// Program to Print Alphabets From A to Z Using Loop:-

// Our task is to print the alphabets from A to Z using loops. 
// There are various methods to print alphabets from (A to Z) or (a to z).
// - Using ASCII values
// - Using character variables.

// In this article we will mainly focus on the following programs and their logic:

// - Using for loop
// - Using the while loop
// - Using a do-while loop

// Program to display alphabets using ASCII values:-
// code:-
// C Program to display alphabets using ASCII values
#include <stdio.h>

int main()
{
    int i;
    printf("Alphabets from (A-Z) are:\n");

    // ASCII value of A=65 and Z=90
    for (i = 65; i <= 90; i++) {
        // Integer i with %c will be converted to character
        // before printing.%c will takes its equivalent
        // character value
        printf("%c ", i);
    }

    printf("\nAlphabets from (a-z) are:\n");

    // ASCII value of a=97 and z=122
    for (i = 97; i <= 122; i++) {
        // Integer i with %c will be converted to character
        // before printing.%c will takes its equivalent
        // character value
        printf("%c ", i);
    }

    return 0;
}

// Output:-
// Alphabets from (A-Z) are:
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
// Alphabets from (a-z) are:
// a b c d e f g h i j k l m n o p q r s t u v w x y z 

// Program to print (A to Z) and (a to z) using for loop
// In the below program,

// - For loop is used to print the alphabets from A to Z. A loop variable is taken to do this of type 'char'. 
// - The loop variable 'i' is initialized with the first alphabet 'A' and incremented by 1 on every iteration.
// - In the loop, the character 'i' is printed as the alphabet.

// code:-
// C program to find the print
// Alphabets from A to Z

#include <stdio.h>

int main()
{
    // Declare the variables
    char i;

    // Display the alphabets
    printf("The Alphabets from A to Z are: \n");

    // Traverse each character
    // with the help of for loop
    for (i = 'A'; i <= 'Z'; i++) {

        // Print the alphabet
        printf("%c ", i);
    }

    printf("\nThe Alphabets from a to z are: \n");

    // Traverse each character
    // with the help of for loop
    for (i = 'a'; i <= 'z'; i++) {

        // Print the alphabet
        printf("%c ", i);
    }

    return 0;
}

// Output:-
// The Alphabets from A to Z are: 
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
// The Alphabets from a to z are: 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 

// Program to print (A to Z) and (a to z) using the while loop
// In the below program,

// - While loop is used to print the alphabets from A to Z. A loop variable is taken to display of type 'char'. 
// - The loop variable 'i' is initialized with the first alphabet 'A' and incremented by 1 on every iteration.
// - In the loop, the character 'i' is printed as the alphabet.

// code:-
// C program to find the print
// Alphabets from (A to Z) and
// (a to z) using while loop

#include <stdio.h>

int main()
{
    // Declaring the variable
    char i;

    // Display the alphabets
    printf("The Alphabets from A to Z are: \n");

    // Traversing each character
    // with the help of while loop

    i = 'A';

    while (i <= 'Z') {
        printf("%c ", i);
        i++;
    }

    // for lower case alphabets
    printf("\nThe Alphabets from a to z are: \n");

    i = 'a';

    while (i <= 'z') {
        printf("%c ", i);
        i++;
    }

    return 0;
}

// Output:-
// The Alphabets from A to Z are: 
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
// The Alphabets from a to z are: 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 

// Program to print (A to Z) and (a to z) using a do-while loop:
// In the below program,

// - The do-while loop is used to print the alphabets from A to Z. A loop variable is taken to display of type 'char'. 
// - The loop variable 'i' is initialized with the first alphabet 'A' and incremented by 1 on every iteration.
// - In the loop, the character 'i' is printed as the alphabet.

// code:-

// C program to find the print
// Alphabets from (A to Z) and 
// (a to z) using do-while loop

#include <stdio.h>

int main()
{
    // Declaring the variable
    char i;

    // Display the alphabets
    printf("The Alphabets from A to Z are: \n");

    // Traversing each character
    // with the help of do while loop

    i = 'A';

    do {
        printf("%c ", i);
        i++;
    } while (i <= 'Z');

    // for lower case alphabets
    printf("\nThe Alphabets from a to z are: \n");

    i = 'a';

    do {
        printf("%c ", i);
        i++;
    } while (i <= 'z');

    return 0;
}

// Output:-
// The Alphabets from A to Z are: 
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
// The Alphabets from a to z are: 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 