#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(; n>0; n/=10) {
        int d = n % 10;
        if(d % 2 != 0) sum += d;
    }
    printf("Sum of odd digits = %d\n", sum);
    return 0;
}
