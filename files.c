#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using for loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
