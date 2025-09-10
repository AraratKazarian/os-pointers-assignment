#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;

    printf("String using pointer: ");
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    
    int count = 0;
    ptr = str;
    while(*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}

