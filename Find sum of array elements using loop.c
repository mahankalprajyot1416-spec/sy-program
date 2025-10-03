#include <stdio.h>
int main() {
    int n, arr[100], sum=0;
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}
