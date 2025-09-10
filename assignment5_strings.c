#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;

    printf("atring using pointer: ");
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    int count = 0;
    ptr = str;
    while(*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("number of characters: %d\n", count);

    return 0;
}

