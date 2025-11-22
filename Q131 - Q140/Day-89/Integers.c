// Show that enums store integers by printing assigned values.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>

int main() {
    enum Example { X = 5, Y = 10, Z = 20 };

    printf("X = %d\n", X);
    printf("Y = %d\n", Y);
    printf("Z = %d\n", Z);

    return 0;
}
