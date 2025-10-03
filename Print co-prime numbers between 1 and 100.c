#include <stdio.h>
int hcf(int a, int b) {
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    return a;
}
int main() {
    for(int i=2; i<=100; i++) {
        for(int j=i+1; j<=100; j++) {
            if(hcf(i,j) == 1) {
                printf("(%d,%d) ", i, j);
            }
        }
    }
    return 0;
}
