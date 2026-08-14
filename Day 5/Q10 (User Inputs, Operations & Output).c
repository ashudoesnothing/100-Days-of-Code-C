/*  
Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Date: 14/08/2026
*/

#include <stdio.h>
int main(){
    // Variables for different time units
    int total_sec, hours, minutes, seconds;

    // Input total seconds
    printf("Enter the time in seconds: ");
    scanf("%d", &total_sec);

    // Extract hours, minutes, and remaining seconds
    hours = total_sec / 3600;
    minutes = (total_sec % 3600) / 60;
    seconds = total_sec % 60;

    // Display formatted time
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
