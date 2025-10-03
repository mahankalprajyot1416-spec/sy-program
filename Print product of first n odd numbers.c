#include <stdio.h>
int main() {
    int n, product = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i+=2) {
        product *= i;
    }
    printf("Product = %d\n", product);
    return 0;
}
