//Write a program to calculate an electricity bill based on units consumed.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>
int main() 
{
    int days, fine;
    scanf("%d", &days);
    if(days <= 5)
        fine = days * 2;
    else if(days <= 10)
        fine = days * 4;
    else if(days <= 30)
        fine = days * 6;
    else 
    {
        printf("Membership Cancelled\n");
        return 0;
    }
    printf("Fine ₹%d\n", fine);
    return 0;
}
