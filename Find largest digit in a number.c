#include <stdio.h>
int main() {
    int n, max=0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(; n>0; n/=10) {
        int d = n % 10;
        if(d > max) max = d;
    }
    printf("Largest digit = %d\n", max);
    return 0;
}
