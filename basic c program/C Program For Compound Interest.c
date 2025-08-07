// C Program For Compound Interest:-
// explanation:-
// What is 'Compound interest'? 
// Compound interest is the addition of interest to the principal sum of a loan or deposit, or 
// in other words, interest on interest. It is the result of reinvesting interest, rather than paying
// it out, so that interest in the next period is then earned on the principal sum plus 
// previously-accumulated interest. Compound interest is standard in finance and economics.
// Compound interest may be contrasted with simple interest, where interest is not added 
// to the principal, so there is no compounding.

// Compound Interest formula:-
// Formula to calculate compound interest annually is given by: 
// Amount= P(1 + R/100)t

// Compound Interest = Amount - P
// Where, 
// P is principal amount 
// R is the rate and 
// T is the time span

// Pseudo Code:-

// Input principal amount. Store it in some variable say principal.
// Input time in some variable say time.
// Input rate in some variable say rate.
// Calculate Amount using formula, 
// Amount = principal * (1 + rate / 100)  time).
// Calculate Compound Interest using Formula.
// Finally, print the resultant value of CI.
// Example:-

// Input: Principal (amount): 1200
//                     Time: 2
//                     Rate: 5.4
// Output: Compound Interest = 133.099243

// code:-

// C program to calculate Compound Interest
#include <stdio.h>

// For using pow function we must 
// include math.h
#include<math.h> 

// Driver code
int main() 
{
  // Principal amount
  double principal = 10000; 

  // Annual rate of interest
  double rate = 5; 

  // Time
  double time = 2; 

  // Calculating compound Interest
  double Amount = principal * 
                  ((pow((1 + rate / 100), 
                    time)));
  double CI = Amount - principal;
 
  printf("Compound Interest is : %lf",CI);
  return 0;
}

// Output:-
// Compound interest is 1025