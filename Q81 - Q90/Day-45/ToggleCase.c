// Toggle case of each character in a string.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0;
    scanf(" %[^\n]", s);
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32; // to UPPER
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32; // to lower
        }
        i++;
    }
    printf("%s\n", s);
    return 0;
}
