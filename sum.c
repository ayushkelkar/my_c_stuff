#include <stdio.h>
// Takes 2 numbers as input and outputs sum
int main() {
    int a, b;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    int sum = a+b;
    printf("The sum of the two numbers is: %d\n", sum);
    return 0;
}