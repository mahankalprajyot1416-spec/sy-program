#include <stdio.h>
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--) {
        char ch='A';
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=i;j++) printf("%c ", ch++);
        printf("\n");
    }
    return 0;
}
