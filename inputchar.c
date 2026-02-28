// Inputting character array or a string
#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your name: \n");
    scanf("%50s", name);
    printf("Hello %s", name);
}