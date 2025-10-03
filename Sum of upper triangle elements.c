#include <stdio.h>
int main() {
    int n, a[10][10], sum=0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
            sum += a[i][j];

    printf("Sum of upper triangle = %d\n", sum);
    return 0;
}
