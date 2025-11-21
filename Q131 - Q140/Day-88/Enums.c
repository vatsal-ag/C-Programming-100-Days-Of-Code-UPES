// Print all enum names and integer values using a loop.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>

int main() {
    enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    int i;
    for (i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
