#include <stdio.h>

int main() {
    int n, count = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle case for 0 (which has 1 digit)
    if (n == 0) {
        count = 1;
    } else {
        // Work with positive number only
        if (n < 0) {
            n = -n;  // make it positive
        }
        // Count digits using while loop
        while (n > 0) {
            n = n / 10;
            count++;
        }
    }

    // Output result
    printf("The number has %d digits.\n", count);

    return 0;
}
