/* Program to see if a number is a Strong Number (aka. Factorion). NOTE: Only Positive Numbers here.
If sum of factorials of digits == number, then number is strong number. */
#include <stdio.h>
int main() {
    int number, original, digit, j, fact, sum = 0;
    printf("Hello! Enter a number: \n");
    scanf("%d", &number);
    original = number;
    if (number <= 0) {
        if (number == 0) {
            printf("%d is not a Strong Number. \n", number);
        }
        else {
            printf("Only positive integers allowed. Exiting...\n");
        }
    }
    else {
        number = original; // Resetting number
        // Loop to iterate between digits and factorials
        while(number > 0) {
            fact = 1;
            digit = number%10;
            for (j = 1; j <= digit; j++) { // Logic changes if j = 0. If j = 0, need another variable to be iterated for factorial which is redundant.
                fact *= j;
            }
            sum += fact; // Add the factorials
            number /= 10;
        }
        // Simple condition for checking
        if (sum == original) {
            printf("%d is a Strong Number\n", original);
        }
        else {
            printf("%d is not a Strong Number\n", original);
        }
    }
}