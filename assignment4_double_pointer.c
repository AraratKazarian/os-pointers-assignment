#include <stdio.h>

int main() {
    int num = 24;
    int *ptr = &num;    
    int **dptr = &ptr; 

    printf("Value using pointer: %d\n", *ptr);
    printf("Value using double-pointer: %d\n", **dptr);

    return 0;
}