#include <stdio.h>
void main() {
    int n;
    long int fact;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact *= i;      
        }
        printf("Factorial of %d = %ld\n", n, fact);
    }
}