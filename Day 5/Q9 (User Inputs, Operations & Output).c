/*  
Write a program to calculate simple and compound interest for given principal, rate, and time.
Date: 14/08/2026
*/

#include <stdio.h>
#include <math.h>
int main(){
    // Declare variables for financial inputs and outputs
    float simple_interest, compound_interest, amount, rate, time;

    // Read inputs
    printf("Enter the principal amount: ");
    scanf("%f", &amount);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period: ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (amount * rate * time) / 100;
    
    // Calculate compound interest using math formula
    compound_interest = amount * pow(1 + rate / 100, time) - amount;

    // Output results
    printf("Simple Interest =  %.2f, ", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}
