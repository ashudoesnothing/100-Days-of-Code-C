/*  
Write a program to input a year and check whether it is a leap year or not using conditional statements.
Date: 16/08/2026
*/

#include <stdio.h>
int main(){
    // Declare integer variable to store the year
    int year;

    // Prompt user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year conditions
    // A year is a leap year if divisible by 400 OR (divisible by 4 AND not divisible by 100)
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        printf("Leap year\n");
    } 
    else {
        printf("Not a leap year\n");
    }

    return 0;
}
