/*
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
Date: 15/08/2026
*/

#include <stdio.h>
int main(){
    // Declare integer variable
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use nested conditional statements to determine the sign
    if (number > 0){
        printf("Positive\n");
    } 
    else{
        // Inside else, further check if negative or zero
        if (number < 0) {
            printf("Negative\n");
        } 
        else {
            printf("The number is zero\n");
        }
    }
    return 0;
}
