// Rotate an array to the right by k positions.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>
int main()
{
    int n, i, k;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &k);
        k %= n;
    }
    for (i = 0; i < n; i++)
    {
        int ni = (i + k) % n;
        b[ni] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
