#include <stdio.h>
int main() {
    int n, flag=1;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n<2) flag=0;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            flag=0;
            break;
        }
    }
    if(flag) printf("%d is prime", n);
    else printf("%d is not prime", n);
    return 0;
}
