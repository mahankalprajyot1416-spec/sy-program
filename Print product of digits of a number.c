#include <stdio.h>
int main() {
    int n, product = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for(; n>0; n/=10) {
        product *= n % 10;
    }
    printf("Product of digits = %d\n", product);
    return 0;
}
