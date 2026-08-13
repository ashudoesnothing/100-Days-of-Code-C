/*  
Write a program to swap two numbers without using a third variable.
Date: 13/08/2026
*/

#include <stdio.h>
int main(){
    // Declare only two variables
    int first, second;

    // Input numbers
    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    // Mathematical swap without temp variable
    first = first + second;
    second = first - second;
    first = first - second;

    // Display result
    printf("After swap: %d ", first);
    printf("%d \n", second);
    return 0;
}
