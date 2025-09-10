#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; 

    printf("printing array using pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    for(int i = 0; i < 5; i++) {
        *(ptr + i) += 10;
    }

    printf("printing modified array using array name:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}