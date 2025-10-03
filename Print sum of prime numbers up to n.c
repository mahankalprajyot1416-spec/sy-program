#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int num=2; num<=n; num++) {
        int flag = 1;
        for(int i=2; i<=num/2; i++) {
            if(num % i == 0) {
                flag = 0;
                break;
            }
        }
        if(flag) sum += num;
    }
    printf("Sum of primes = %d\n", sum);
    return 0;
}
