/*  
Write a program to check whether an entered character is a vowel or consonant.
Date: 16/08/2026
*/

#include <stdio.h>
int main(){
    // Declare character variable
    char ch;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the input is an alphabet letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if it is a vowel using logical OR
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        // Handle invalid input (numbers, symbols)
        printf("Invalid input\n");
    }

    return 0;
}
