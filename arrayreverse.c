// Program to reverse an inputted array of integers
#include <stdio.h>
int main () {
    int size, i, j = 0;
    printf("Hello! The following program will return the inputted array but in reverse.\nTo start, enter the size of the array you want:\n");
    scanf("%d", &size);
    int array[size], reversed[size];
    printf("Input %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    // Now we have an array. 
    for (i = (size-1); i >= 0 ; i--) {
        reversed[j] = array[i];
        j++;
    }
    // Now we have the reverse of array in reversed
    // Printing the array
    for (i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");
}