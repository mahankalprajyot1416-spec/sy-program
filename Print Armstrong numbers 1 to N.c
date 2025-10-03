#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        int sum=0, temp=i, digits=0, rem;
        for(int t=temp; t>0; t/=10) digits++;
        temp = i;
        for(; temp>0; temp/=10) {
            rem = temp % 10;
            sum += pow(rem, digits);
        }
        if(sum==i) printf("%d ", i);
    }
    return 0;
}
