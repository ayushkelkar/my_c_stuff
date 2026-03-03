/* Program to check if a number is an armstrong number. NOTE: Only positive integers here.
If the sum of digits, individually to the power of number of digits is equal to the number. */
#include <stdio.h>
int main() {
    int number, original, sum = 0, digit, j, prod = 1, i = 0; // Defining Variables
    printf("Hello! Enter the number: \n");
    scanf("%d", &number);
    if (number == 0) {
        printf("%d is an Armstrong Number.\n", number);
    }
    else {
        original = number; // Setting original to number as number will undergo operations
        while(number > 0) {
        number /= 10;
        i++; // This is the number of digits iterating each time the loop runs
        }
        number = original; // Setting number back to original for further operations
        while (number > 0) {
            digit = number%10; // This is the last digit of the number
            for (j = 1; j <= i; j++) {
                prod *= digit; // Product multiplies with the current last digit and assigns back to itself
            }
            sum += prod; // This is the sum after each product iteration
            prod = 1; // Resetting prod back to 1
            number /= 10; // Divides the number by 10 for further digit operations
        }
        // Simple condition to see if the sum (aka. the final number) is equal to the original number or not
        if (sum == original) {
            printf("%d is an Armstrong Number.\n", original);
        }
        else {
            printf("%d is not an Armstrong Number.\n", original);
        }
    }
}