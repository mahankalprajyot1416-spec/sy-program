#include <stdio.h>
int fact(int x) {
    int f=1;
    for(int i=1; i<=x; i++) f *= i;
    return f;
}
int main() {
    int n, temp, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    for(; n>0; n/=10) {
        sum += fact(n%10);
    }

    if(sum == temp) printf("Strong Number\n");
    else printf("Not Strong Number\n");
    return 0;
}
