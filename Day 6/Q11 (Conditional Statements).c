/*  
Write a program to input an integer and check whether it is even or odd using if–else.
Date: 15/08/2026
*/

#include <stdio.h>
int main(){
    // Declare integer variable
    int number;

    // Get input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if divisible by 2 to determine if even or odd
    if (number % 2 == 0){
        printf("%d is even\n", number);
    } 
    else{
        printf("%d is odd\n", number);
    }
    return 0;
}
