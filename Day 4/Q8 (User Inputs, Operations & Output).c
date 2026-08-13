/*  
Write a program to find and display the sum of the first n natural numbers.
Date: 13/08/2026
*/

#include <stdio.h>
int main(){
    // n holds the limit, sum will accumulate the total
    int n, sum = 0;

    // Get the limit n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 1 to n to calculate the sum
    for (int i = 1; i <= n; i++){
        sum = sum + i;
    }

    // Print final sum
    printf("Sum = %d", sum);

    return 0;
}
