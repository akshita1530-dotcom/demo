#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;  // Use unsigned long long to handle large factorials

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= n) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}
