#include <stdio.h>
#include <math.h>
int main() {
    int n, sum=0, temp, digits=0, rem;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    for(int t=temp; t>0; t/=10) digits++;
    temp = n;
    for(; temp>0; temp/=10) {
        rem = temp % 10;
        sum += pow(rem, digits);
    }
    if(sum==n) printf("%d is Armstrong", n);
    else printf("%d is not Armstrong", n);
    return 0;
}
