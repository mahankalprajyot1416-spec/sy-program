#include <stdio.h>
int main() {
    int n, a[10][10], flag=1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) {
            if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
                flag=0;
        }

    if(flag) printf("Identity matrix\n");
    else printf("Not identity matrix\n");
    return 0;
}
