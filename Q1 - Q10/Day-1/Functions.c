//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(void) 
{
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) { puts("Invalid input"); return 1; }
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0) 
    printf("Quotient = %.2f\n", (double)a / b);
    else        
    printf("Quotient = Undefined (division by zero)\n");
    return 0;
}