#include <stdio.h>
int main() {
    int n, count=0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(; n>0; n/=10) {
        if((n % 10) % 2 != 0) count++;
    }
    printf("Odd digits count = %d\n", count);
    return 0;
}
