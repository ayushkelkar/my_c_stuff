// Program to find the maximum number in an array without sorting.
#include <stdio.h>
int main() {
    int size = 0, i, max = 0;
    printf("Hello! Enter the size of the array: \n");
    scanf("%d", &size);
    int array[size];
    printf("Alright. Enter %d Numbers: \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++) {
        max = array[i];
    }
}
// Unfinished. Idk the logic yet.