//Write a program to input an integer and check whether it is even or odd using if–else.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
