/*  
Write a program to input two numbers and display their sum.
Date: 10/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variables to store the two numbers and their sum
    int n1, n2, sum;
    
    // Prompt the user for the first number
    printf("Enter the first number: ");     
    scanf("%d", &n1);

    // Prompt the user for the second number
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("\n");
    
    // Calculate the sum of the two numbers
    sum = n1 + n2;
    
    // Display the calculated sum
    printf("Sum = %d\n", sum);
    return 0;
}
