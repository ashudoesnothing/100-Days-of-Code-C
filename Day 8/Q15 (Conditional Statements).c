/*  
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
Date: 17/08/2026
*/

#include <stdio.h>
int main(){
    // Declare character variable
    char ch;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check conditions using if-else ladder
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } 
    else {
        printf("Special character\n");
    }

    return 0;
}
