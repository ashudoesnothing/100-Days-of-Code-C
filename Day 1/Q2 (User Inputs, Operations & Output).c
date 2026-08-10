/*  
Write a program to input two numbers and display their sum, difference, product, and quotient.
Date: 10/08/26
*/

#include <stdio.h>
int main(){
    // Declare variables for inputs and results
    int n1, n2, sum, diff, product;
    float quotient;

    // Read the first number
    printf("Enter the first number: ");     
    scanf("%d", &n1);

    // Read the second number
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("\n");
    
    // Perform arithmetic operations
    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;
    
    // Display results for sum, difference, and product
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    
    // Safely perform division by checking for zero
    if(n2 != 0){
        quotient = (float)n1 / n2;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined \n");
    }

    return 0;
}
