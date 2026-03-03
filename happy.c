// Program for a Happy Number. Note: Only positive numbers here. No 0 or negatives.
#include <stdio.h>

// Function to take input of the number
int inputfunct() {
    int input;
    printf("Hello! Enter the number: \n");
    scanf("%d", &input);
    return input;
}

// Function which returns the sum of square of digits.
// This is f(x)
int sumsquaredigits(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n%10;
        sum += (digit*digit);
        n /= 10;
    }
    return sum;
}

// Floyd's Algorithm Function
// slow will do f(x), while fast will do fof(x)
int floyd() {
    int condition = 0, slow, fast; // condition 0 means false (not happy). 1 means true (happy). 2 means infinite loop (not happy). Assuming 0 for initial condition.
    int input = inputfunct();
    // Now we have the input containing the original number.
    slow = input;
    fast = input;
    while (condition == 0) {
        slow = sumsquaredigits(slow);
        fast = sumsquaredigits(sumsquaredigits(fast));
        if (fast == 1) { // If fast is 1, the number is happy
            condition = 1;
        }
        else if (slow == fast) { // If slow = fast, then its an infinite loop. So number is not happy.
            condition = 2;
        }
    }
    return condition;
}

int main() {
    int condition;
    condition = floyd();
    // So now the condition is either true or false.
    if (condition == 0 || condition == 2) {
        printf("It is not a happy number.\n");
    }
    else {
        printf("It is a happy number\n");
    }
}