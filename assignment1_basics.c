#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Address of num using &: %p\n", &num);
    printf("Address of num using pointer: %p\n", ptr);

    *ptr = 20;
    printf("New value of num: %d\n", num);
    printf("Address of num using &: %p\n", &num);
    printf("Address of num using pointer: %p\n", ptr);

    return 0;
}

