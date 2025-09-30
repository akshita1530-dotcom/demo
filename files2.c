#include <stdio.h>

int main() {
    int n, i, isPrime = 1;  // assume prime

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        // check divisibility from 2 to n/2
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break; // no need to check further
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
