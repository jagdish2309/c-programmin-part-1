// C Program to Check Vowel or Consonant:-

// explanation:-
// In English, there are 5 vowel letters and 21 consonant letters. In lowercase alphabets, 'a', 'e', 'i', 'o', and 'u' are vowels 
// and all other characters ('b', 'c', 'd, 'f'....) are consonants. Similarly in uppercase alphabets, 'A', 'E', 'I', 'O', and 'U' are vowels, 
// and the rest of the characters are consonants.

// Algorithm:-
// The algorithm to check vowels and consonants is simple to understand and implement. Here,

// - Check if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'), 
// the character is a vowel.
// - Else, the character is a consonant.

// code:-
// C program to check if a character
// is a vowel or consonant
#include <stdio.h>

// Driver code
int main()
{
    char ch = 'A';

    // Checking if the character ch
    // is a vowel or not.
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {

        printf("The character %c is a vowel.\n", ch);
    }
    else {
        printf("The character %c is a consonant.\n", ch);
    }

    return 0;
}


// Output:-
// The character A is a vowel