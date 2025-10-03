#include <stdio.h>
#include <math.h>
int main() {
    for(int n=1; n<=1000; n++) {
        int temp=n, digits=0, sum=0;
        for(int i=n; i>0; i/=10) digits++;
        for(int i=n; i>0; i/=10) sum += pow(i%10, digits);
        if(sum == temp) printf("%d ", n);
    }
    return 0;
}
