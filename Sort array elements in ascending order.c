#include <stdio.h>
int main() {
    int n, arr[100], temp;
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted ascending: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
