/*  
Write a program to find the roots of a quadratic equation and categorize them.
Date: 18/08/2026
*/

#include <stdio.h>
#include <math.h>

int main(){
    // Declare variables for coefficients and roots
    int a, b, c;
    float d, root1, root2;

    // Prompt user for input
    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the discriminant
    d = (b * b) - (4 * a * c);

    // Check conditions for roots
    if (d > 0) {
        // Roots are real and different
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        
        // Print roots using %g to remove trailing zeros
        printf("Roots are real and different: %g, %g\n", root1, root2);
    } 
    else if (d == 0) {
        // Roots are real and same
        root1 = -b / (2.0 * a);
        printf("Roots are real and same: %g\n", root1);
    } 
    else {
        // Roots are complex
        printf("Roots are complex\n");
    }

    return 0;
}
