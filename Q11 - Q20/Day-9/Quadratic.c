// Q17: Write a program to find the roots of a quadratic equation and categorize them.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
        printf("Roots are real and different\n");
    else if (d == 0)
        printf("Roots are real and same\n");
    else
        printf("Roots are complex\n");
    return 0;
}
