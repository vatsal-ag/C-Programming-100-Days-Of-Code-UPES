// Write a program to display the day of the week based on a number (1–7) using switch-case.
//Name: Vatsal Agarwal
//SAP ID: 590023223 

#include <stdio.h>
int main()
{
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day number\n");
    }
    return 0;
}
