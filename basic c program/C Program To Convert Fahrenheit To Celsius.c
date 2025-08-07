// explanation:-
// In this article, we will learn to write a C Program to convert temperature from Fahrenheit to Celsius by applying the conversion formula to calculate the equivalent temperature in Celsius. For example, 82° in Fahrenheit is equal to 27.7° in Celcius.

// Formula to Convert Fahrenheit to Celsius:-
// T(°C) = (T(°F) - 32) × 5/9

// where,
// T(°C): Temperature in Celsius.
// T(°F): Temperature in Farenheit.

// Algorithm:-
// 1) Define temperature in Fahrenheit Units.
// 2) Apply the formula to convert temperature in Fahrenheit to Celsius.
// 3) Print the temperature in Celsius.

// code:-
// C Program to convert
// Fahrenheit to Celsius
#include <stdio.h>

// Function to convert Degree
// Fahrenheit to Degree Celsius
float fahrenheit_to_celsius(float f)
{
    return ((f - 32.0) * 5.0 / 9.0);
}

// Driver code
int main()
{
    float f = 40;

    // Passing parameter to function
    printf("Temperature in Degree Celsius : %0.2f",
           fahrenheit_to_celsius(f));
    return 0;
}

// Output:-
// Temperature in Degree Celsius : 4.44