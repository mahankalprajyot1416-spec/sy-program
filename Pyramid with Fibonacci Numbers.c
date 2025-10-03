#include <stdio.h>
int main() {
    int n, a=0, b=1, next;
    printf("Enter rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=i;j++) {
            printf("%d ", a);
            next=a+b; a=b; b=next;
        }
        printf("\n");
    }
    return 0;
}
