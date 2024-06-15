#include<stdio.h>

// Prime Numbers: A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.
// Disclaimer: This is not the best method to solve this problem

int main() {
    int n, i, prime=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }

    if (prime == 0)
        printf("This is not a prime number");
    else
        printf("This is a prime number");

    return 0;
}