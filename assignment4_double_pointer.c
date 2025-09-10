#include <stdio.h>

int main() {
    int num = 30;
    int *ptr = &num;     // pointer to integer
    int **dptr = &ptr;   // pointer to pointer

    printf("Value using pointer: %d\n", *ptr);
    printf("Value using double-pointer: %d\n", **dptr);

    return 0;
}