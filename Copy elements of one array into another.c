#include <stdio.h>
int main() {
    int n, arr[100], copy[100];
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++) copy[i] = arr[i];

    printf("Copied array: ");
    for(int i=0; i<n; i++) printf("%d ", copy[i]);
    return 0;
}
