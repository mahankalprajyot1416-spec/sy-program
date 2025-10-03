#include <stdio.h>
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        int val = 1;
        for(int j=0; j<n-i; j++) printf(" ");
        for(int k=0; k<=i; k++) {
            printf("%d ", val);
            val = val * (i-k) / (k+1);
        }
        printf("\n");
    }
    return 0;
}
