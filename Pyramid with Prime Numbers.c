#include <stdio.h>
int isPrime(int n) {
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
    return 1;
}
int main() {
    int n, count=0, num=2;
    printf("Enter rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=i;j++) {
            while(!isPrime(num)) num++;
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
