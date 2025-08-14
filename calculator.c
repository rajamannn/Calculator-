// Simple Calculator Using C
#include <stdio.h>

// Main function where execution starts
int main() {
    float num1, num2, results; 
    char operations;           
    char choice;              

    // Do-while loop ensures the calculator runs at least once
    do {
        printf("\n===== Simple Calculator =====\n");

        // Input of the program as here given /
        printf("Enter the number 1: ");
        scanf("%f", &num1);

      
        printf("Enter the operator (+,-,*,/): ");
        scanf(" %c", &operations);

      
        printf("Enter the number 2: ");
        scanf("%f", &num2);

        // For the calculation based on operator
        switch (operations) {
            case '+':
                results = num1 + num2;
                break;
            case '-':
                results = num1 - num2;
                break;
            case '*':
                results = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    results = num1 / num2;
                else {
                    printf("Error: Division by zero!\n");
                    results = 0;
                }
                break;
            default:
                printf("Invalid Operation\n");
                results = 0;
        }

        // Display result after the caculation 
        printf("Result = %.2f\n", results);

        // Asking for continution 
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y'); // Choice submission 

    
    printf("Calculator closed.\n");
    return 0;
}
