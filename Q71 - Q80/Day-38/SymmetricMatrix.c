// Check if a matrix is symmetric.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>
int main()
{
    int n, i, j, ok = 1;
    scanf("%d %d", &n, &n);
    int a[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                ok = 0;
    printf(ok ? "True\n" : "False\n");
    return 0;
}
