//factorial of n

#include<stdio.h>
#include<stdlib.h>


int main() {
    int n, i, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <=n; i++) {
        factorial*= i; // factorial*= i is same as factorial = factorial * i
    }
    printf("factorial of !%d is %d", n, factorial);

return 0;
}

