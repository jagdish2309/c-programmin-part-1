// C Program To Print Hollow Pyramid Patterns:-
// explanation:-The Hollow Pyramid patterns are the variation of pyramid patterns where only the outer edges are filled with characters but the interior is left empty. In this article, we will learn how to print different hollow pyramid patterns.

// There can be 5 hollow pyramid patterns corresponding to each of the normal pyramid pattern in C:

// 1) Hollow Right Half Pyramid:-
// The hollow right half pyramid pattern looks like a right-angled triangle aligned to the left and with its hypotenuse towards right. It only contains the characters at its boundary and is left hollow inside.

// code:-
#include <stdio.h>

int main() {
    int n = 5;
  
  	// Outer loop to print each row
    for (int i = 1; i <= n; i++) {
      
      	// Inner loop to print the whitespace and stars
        for (int j = 1; j <= i; j++) {
          
            // Print '*' for first or last column, or last row
          	// print whitespaces for the rest
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Output:-

// *           |   1           |   A
// * *         |   1 2         |   A B
// *   *       |   1   3       |   A   C
// *     *     |   1     4     |   A     D
// * * * * *   |   1 2 3 4 5   |   A B C D E

// 2) Hollow Left Half Pyramid:-
// explanation:- The hollow left half pyramid pattern also looks like a right-angled triangle but aligned to the right with its hypotenuse towards left and hollow from inside.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop to print each row
    for (int i = 1; i <= n; i++) {

        // Print leading white spaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");

        // Print '*' for first or last column, or last row
        // print whitespaces for the rest
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Output:-

//         *    |            1    |            A
//       * *    |          1 2    |          A B
//     *   *    |        1   3    |        A   C
//   *     *    |      1     4    |      A     D
// * * * * *    |    1 2 3 4 5    |    A B C D E

// 3) Hollow Full Pyramid:-
// The hollow full pyramid pattern looks like an equilateral triangle with the characters present at the edges, but the inside remains empty.

// code:-
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
      
      	// Print leading whitespaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");
      
        for (int k = 1; k <= 2 * i - 1; k++) {
          
            // Print '*' for first or last position in the row
          	// Print whitespace for the rest
            if (k == 1 || k == 2 * i - 1 || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Output:-

//         *           |           1           |           A
//       *   *         |         1   3         |         A   C
//     *       *       |       1       5       |       A       E
//   *           *     |     1           7     |     A           G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I

// 4) Hollow Diamond Pattern:-
// explanation:- This pattern is also similar to the Diamond Pattern but without the inner elements such that it appears hollow inside.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // First outer loop to print each row
    for (int i = 0; i < 2 * n - 1; i++) {
      
        // Assigning values to the level according to
        // the row number
        int l;
        if (i < n) l = 2 * (n - i) - 1;
        else l = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < l; j++)
            printf(" ");

        // Second inner loop to print star * and inner
        // whitespaces
        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Output:-

//         *           |           1           |           A
//       *   *         |         1   3         |         A   C
//     *       *       |       1       5       |       A       E
//   *           *     |     1           7     |     A           G
// *               *   |   1               9   |   A               I
//   *           *     |     1           7     |     A           G
//     *       *       |       1       5       |       A       E
//       *   *         |         1   3         |         A   C
//         *           |           1           |           A

// 5) Hollow Hourglass Pattern:-
// The hollow hourglass is the pattern in which only the boundary of the hourglass pattern is visible.

// code:-
#include <stdio.h>

int main() {
    int n = 5;

    // First outer loop to iterate through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        // Assigning level according to row number
        int l;
        if (i < n) l = 2 * i + 1;
        else  l = 2 * (2 * n - i) - 3;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < l; j++)
            printf(" ");

        // Second inner loop to print star * and inner
        // whitespaces
        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1 || i == 0
                || i == 2 * n - 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Output:-

// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9    |   A B C D E F G H I
//   *           *     |     1           7      |     A           G
//     *       *       |       1       5        |       A       E
//       *   *         |         1   3          |         A   C
//         *           |           1            |           A
//       *   *         |         1   3          |         A   C
//     *       *       |       1       5        |       A       E
//   *           *     |     1           7      |     A           G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9    |   A B C D E F G H I