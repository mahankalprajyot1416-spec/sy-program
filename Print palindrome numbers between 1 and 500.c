#include <stdio.h>
int main() {
    for(int n=1; n<=500; n++) {
        int temp=n, rev=0;
        for(int i=n; i>0; i/=10) rev = rev*10 + i%10;
        if(temp == rev) printf("%d ", n);
    }
    return 0;
}
