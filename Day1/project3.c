#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Perform arithmetic operations
    printf("Sum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);
    
    // Handle division safely
    if (num2 != 0) {
        printf("Quotient = %d\n", num1 / num2);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }
    
    return 0;
}
