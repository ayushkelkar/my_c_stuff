// Program to find an element's index using linear search.
#include <stdio.h>
int main() {
    int size = 0, i, find = 0, found = 0;
    printf("Hello! Enter the size of the array: \n");
    scanf("%d", &size);
    int array[size];
    printf("Alright. Enter %d Numbers: \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number which you want the index of: (NOTE: Index, not Position!)\n");
    scanf("%d", &find);
    for (i = 0; i < size; i++) {
        if(array[i] == find) {
            printf("Element found. Index: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("%d not found. Did you enter the correct number?\n", find);
    }
}