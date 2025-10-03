#include <stdio.h>
int main() {
    int n, a=0, b=1, c, sum=0;
    printf("Enter terms: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
