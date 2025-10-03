#include <stdio.h>
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int s=1;s<=n-i;s++) printf(" ");
        char ch='A';
        for(int j=1;j<=i;j++) printf("%c", ch++);
        for(int j=i-1;j>=1;j--) printf("%c", --ch);
        printf("\n");
    }
    for(int i=n-1;i>=1;i--) {
        for(int s=1;s<=n-i;s++) printf(" ");
        char ch='A';
        for(int j=1;j<=i;j++) printf("%c", ch++);
        for(int j=i-1;j>=1;j--) printf("%c", --ch);
        printf("\n");
    }
    return 0;
}
