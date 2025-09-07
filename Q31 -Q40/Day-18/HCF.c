// Write a program to find the HCF (GCD) of two numbers.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>
int main()
{
    int a, b, i, hcf = 1;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("%d\n", hcf);
    return 0;
}
