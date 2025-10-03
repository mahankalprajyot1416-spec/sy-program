#include <stdio.h>
int main() {
    int count = 0, num = 2;
    while(count < 20) {
        int flag = 1;
        for(int i=2; i<=num/2; i++) {
            if(num % i == 0) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
