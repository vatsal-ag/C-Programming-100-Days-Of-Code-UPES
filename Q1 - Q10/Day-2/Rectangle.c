//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>
int main() 
{
    int length, breadth;
    scanf("%d %d", &length, &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}
