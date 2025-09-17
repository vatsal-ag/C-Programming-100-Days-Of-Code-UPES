//Write a program to print all the prime numbers from 1 to n.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>
int main() 
{
    int n, i, j, flag;
    scanf("%d", &n);
    for(i = 2; i <= n; i++) 
    {
        flag = 1;  
        for(j = 2; j <= i/2; j++) 
        {
            if(i % j == 0) 
            {
                flag = 0; 
                break;
            }
        }
        if(flag == 1)
            printf("%d ", i);
    }
    return 0;
}
