#include<stdio.h>
#include<stdlib.h>


int main() {
    int a = 1, factorial = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(a <= n) {
        factorial *= a;
        a++;
    }
    printf("!%d = %d", n, factorial);

return 0;
}