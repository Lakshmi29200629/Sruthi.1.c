#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1; // Assign values
    }

    printf("Values in the array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // Free memory
    return 0;
}
