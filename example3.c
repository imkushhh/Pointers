#include <stdio.h>

// Function that swaps the values of two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap - x: %d, y: %d\n", x, y);

    // Pass the addresses of x and y to the swap function
    swap(&x, &y);

    printf("After swap - x: %d, y: %d\n", x, y);

    return 0;
}
