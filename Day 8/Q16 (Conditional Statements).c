/*  
Write a program to input three numbers and find the largest among them using if-else.
Date: 17/08/2026
*/

#include <stdio.h>
int main(){
    // Declare integer variables for the three numbers
    int num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using if-else ladder
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %d\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %d\n", num2);
    } 
    else {
        printf("Largest is %d\n", num3);
    }

    return 0;
}
