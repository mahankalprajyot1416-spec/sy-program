#include <stdio.h>
int main() {
    int product = 1;
    for(int i=1; i<=5; i++) {
        product *= i;
    }
    printf("Product = %d\n", product);
    return 0;
}
