#include <stdio.h>
int main() {
    int n, min=9;
    printf("Enter number: ");
    scanf("%d", &n);

    for(; n>0; n/=10) {
        int d = n % 10;
        if(d < min) min = d;
    }
    printf("Smallest digit = %d\n", min);
    return 0;
}
