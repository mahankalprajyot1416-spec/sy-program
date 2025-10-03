#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, digits=0, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    for(int i=n; i>0; i/=10) digits++;

    for(int i=n; i>0; i/=10) {
        sum += pow(i%10, digits);
    }

    if(sum == temp) printf("%d is Armstrong\n", temp);
    else printf("%d is Not Armstrong\n", temp);
    return 0;
}
