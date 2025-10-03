#include <stdio.h>
int main() {
    int bin, dec=0, base=1;
    printf("Enter binary number: ");
    scanf("%d", &bin);

    for(; bin>0; bin/=10) {
        int d = bin % 10;
        dec += d * base;
        base *= 2;
    }
    printf("Decimal = %d\n", dec);
    return 0;
}
