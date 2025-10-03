#include <stdio.h>
int main() {
    int r, c, a=0, b=1, next;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%4d", a);
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n");
    }
    return 0;
}
