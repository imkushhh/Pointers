#include <stdio.h>

int main() {
    int num = 42;        // Declare an integer variable
    int *ptr = &num;     // Declare a pointer and assign the memory address of 'num' to it

    printf("Value of num: %d\n", num);
    printf("Memory address of num: %p\n", (void *)&num);
    printf("Value of ptr (memory address): %p\n", (void *)ptr);
    printf("Dereferenced value of ptr: %d\n", *ptr);

    return 0;
}
