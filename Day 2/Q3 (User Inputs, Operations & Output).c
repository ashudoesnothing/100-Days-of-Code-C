/*  
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Date: 11/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variables for dimensions, area, and perimeter
    int length, width, area, perimeter;

    // Input the length
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    // Input the width
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Print the results
    printf("Area = %d, ", area);
    printf("Perimeter = %d\n", perimeter);
    return 0;
}
