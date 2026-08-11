/*  
Write a program to calculate the area and circumference of a circle given its radius.
Date: 11/08/2026
*/

#include <stdio.h>
int main(){
    // Declare float variables since circle calculations involve decimals
    float radius, area, circumference;

    // Read radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Compute area and circumference using Pi as 3.14
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    // Output the computed values
    printf("Area = %.2f, ", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}
