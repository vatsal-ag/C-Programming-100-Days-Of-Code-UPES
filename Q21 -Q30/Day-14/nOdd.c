//Write a program to print the sum of the first n odd numbers.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        sum = sum + (2 * i - 1);   
    }
    printf("%d\n", sum);
    return 0;
}
