#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    char choice;

    do {
        // Input two numbers
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Input the operator
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);  // space before %c to skip any leftover newline

        // Perform calculation based on operator
        switch(operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                            break;
                    }
            
                    // Ask user if they want to perform another calculation
                    printf("Do you want to perform another calculation? (y/n): ");
                    scanf(" %c", &choice);
            
                } while(choice == 'y' || choice == 'Y');
            
                return 0;
            }
