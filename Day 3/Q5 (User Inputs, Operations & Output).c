/*  
Write a program to convert temperature from Celsius to Fahrenheit.
Date: 12/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variables for temperatures
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (celsius * 1.8) + 32;
    
    // Display the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
