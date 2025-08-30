// C Program to Print Pyramid Pattern:-
// explanation:-a pyramid pattern consists of numbers, stars, or alphabets arranged in a triangular shape. In this article, we will learn how to print different shapes of pyramid patterns using C program.

// 1) Right Half Pyramid Pattern:-
// explanation:- Right half pyramid pattern looks like a right-angle triangle in which the hypotenuse is towards the right i.e. all the characters are aligned to the right.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop for printing rows
    for (int i = 0; i < n; i++) {

        // Inner loop for printing * in each rows
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

// output:-

// *           |   1           |   A
// * *         |   1 2         |   A B
// * * *       |   1 2 3       |   A B C
// * * * *     |   1 2 3 4     |   A B C D
// * * * * *   |   1 2 3 4 5   |   A B C D E

// 2) Left Half Pyramid Pattern:-
// explanation:- Right half pyramid pattern looks like a right-angle triangle with all the characters are aligned to the left resulting in the hypotenuse facing towards the left.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop is for printing the rows
    for (int i = 0; i < n; i++) {

        // First inner loop for printing leading whitespaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");

        // Second inner loop for printing * character
        for (int k = 0; k <= i; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

// output:-

//         *    |            1    |            A
//       * *    |          1 2    |          A B
//     * * *    |        1 2 3    |        A B C
//   * * * *    |      1 2 3 4    |      A B C D
// * * * * *    |    1 2 3 4 5    |    A B C D E

// 3) Full Pyramid Pattern:-
// explanation:- A full pyramid pattern is a pattern of star, numbers or alphabets that looks like an equilateral triangle.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop to print all rows
    for (int i = 0; i < n; i++) {

        // First inner loop to print leading white spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");

        // Second inner loop to print star * character
        for (int k = 0; k < 2 * i + 1; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

// output:-

//          *           |           1           |           A
//        * * *         |         1 2 3         |         A B C
//      * * * * *       |       1 2 3 4 5       |       A B C D E
//    * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//  * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I

// 4) Inverted Full Pyramid Pattern:-
// explanation:- Inverted full pyramid pattern is triangular pattern obtained by rotating the full pyramid pattern by 180°.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // First loop for printing all rows
    for (int i = 0; i < n; i++) {

        // First inner loop for printing leading white
        // spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        // Second inner loop for printing stars *
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

// output:-

// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C
//         *           |           1           |           A
    
// 5) Diamond Pattern:-
// explanation:- The Diamond Pattern is triangular pattern that can be obtained by joining the full pyramid and inverted full pyramid pattern by their bases.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // First outer loop to iterator through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        // Assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n) comp = 2 * (n - i) - 1;
        else comp = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++)
            printf(" ");

        // Second inner loop to print stars *
        for (int k = 0; k < 2 * n - comp; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// output:-
//  *           |           1           |           A
//       * * *         |         1 2 3         |         A B C
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C
//         *           |           1           |           A

// Hourglass Pattern:-
// explanation:- The Diamond Pattern is triangular pattern that can be obtained by joining the full pyramid and inverted full pyramid pattern by their tip.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // First outer loop to iterator through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        // Assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n) comp = 2 * (n - i) - 1;
        else comp = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < 2 * n - comp - 1; j++)
            printf(" ");

        // Second inner loop to print stars *
        for (int k = 0; k < comp; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Output:-

// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C 
//         *           |           1           |           A
//       * * *         |         1 2 3         |         A B C
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I