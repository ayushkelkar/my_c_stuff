// Program to perform Right circular shift on an array.
#include <stdio.h>
int main() {
    int size = 0, i;
    printf("Hello! Enter the size of the array: \n");
    scanf("%d", &size);
    int array[size], new[size];
    printf("Alright. Enter %d Numbers: \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int last = array[(size-1)];
    new[0] = last;
    for (i = 1; i < size; i++) {
        new[i] = array[(i-1)];
    }
    for(i = 0; i < size; i++) {
        printf("%d", new[i]);
    }
    printf("\n");
}