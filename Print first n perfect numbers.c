#include <stdio.h>
int main() {
    int n, count=0, num=2;
    printf("Enter how many perfect numbers: ");
    scanf("%d", &n);

    while(count < n) {
        int sum=0;
        for(int i=1; i<=num/2; i++) {
            if(num % i == 0) sum += i;
        }
        if(sum == num) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
