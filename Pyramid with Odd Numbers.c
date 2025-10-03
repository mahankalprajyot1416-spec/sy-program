#include <stdio.h>
int main() {
    int n, odd=1;
    printf("Enter rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=i;j++) {
            printf("%d ", odd);
            odd+=2;
        }
        printf("\n");
    }
    return 0;
}
