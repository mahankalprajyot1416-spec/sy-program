#include <stdio.h>
int main() {
    int r, c, mat[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
