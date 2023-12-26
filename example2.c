#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Dynamically allocate an array of integers

    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Access and print values using pointers
    for (int i = 0; i < 5; ++i) {
        printf("Value at index %d: %d\n", i, *(arr + i));
    }

    // Don't forget to free the allocated memory
    free(arr);

    return 0;
}
