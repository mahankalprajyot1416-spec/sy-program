#include <stdio.h>
int main() {
    int r, c, a[10][10], b[10][10], diff[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &b[i][j]);

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            diff[i][j] = a[i][j] - b[i][j];

    printf("Difference matrix:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            printf("%4d", diff[i][j]);
        printf("\n");
    }
    return 0;
}
