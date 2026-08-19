/*  
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
Date: 19/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variables for the three sides of the triangle
    int side1, side2, side3;

    // Prompt user for input
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check conditions to classify the triangle
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } 
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }

    return 0;
}
