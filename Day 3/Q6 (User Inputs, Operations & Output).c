/*  
Write a program to swap two numbers using a third variable.
Date: 12/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variables for the two numbers and a temporary one for swapping
    int first, second, temp;

    // Get the first number
    printf("Enter the first number: ");
    scanf("%d", &first);

    // Get the second number
    printf("Enter the second number: ");
    scanf("%d", &second);

    // Swap logic using temp
    temp = first;
    first = second;
    second = temp;

    // Output swapped values
    printf("After swap: %d ", first);
    printf("%d\n", second);
    return 0;
}
