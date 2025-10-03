#include <stdio.h>
int fact(int x) {
    int f=1;
    for(int i=1; i<=x; i++) f *= i;
    return f;
}
int main() {
    for(int n=1; n<=1000; n++) {
        int temp=n, sum=0;
        for(int i=n; i>0; i/=10) {
            sum += fact(i%10);
        }
        if(sum == temp) printf("%d ", n);
    }
    return 0;
}
