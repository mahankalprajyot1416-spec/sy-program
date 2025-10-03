#include <stdio.h>
int comb(int n,int r){
    int num=1,den=1;
    for(int i=1;i<=r;i++){
        num *= (n-i+1);
        den *= i;
    }
    return num/den;
}
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("%d ", comb(i,j));
        }
        printf("\n");
    }
    return 0;
}
