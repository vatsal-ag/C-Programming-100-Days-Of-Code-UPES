// Write a program to calculate the factorial of a number.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
    return 0;
}
