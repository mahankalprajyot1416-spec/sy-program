#include <stdio.h>
int main() {
    int n, rev=0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    for(; n>0; n/=10) rev = rev*10 + n%10;

    if(temp == rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
