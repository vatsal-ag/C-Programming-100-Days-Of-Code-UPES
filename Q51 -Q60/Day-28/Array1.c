//Read and print elements of a one-dimensional array.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>
int main() 
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
    
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
