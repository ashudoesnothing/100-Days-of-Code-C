/*  
Write a program that accepts a percentage (0-100) and assigns a grade based on the given criteria.
Date: 18/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variable for percentage
    int percentage;

    // Prompt user for input
    printf("Enter percentage: ");
    scanf("%d", &percentage);

    // Use if-else ladder to determine the grade
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } 
    else if (percentage >= 80 && percentage < 90) {
        printf("Grade B\n");
    } 
    else if (percentage >= 70 && percentage < 80) {
        printf("Grade C\n");
    } 
    else if (percentage >= 60 && percentage < 70) {
        printf("Grade D\n");
    } 
    else if (percentage >= 0 && percentage < 60) {
        printf("Grade F\n");
    } 
    else {
        printf("Invalid percentage\n");
    }

    return 0;
}
