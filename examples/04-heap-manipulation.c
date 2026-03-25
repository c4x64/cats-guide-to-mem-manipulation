# Dynamic Heap Memory Allocation and Manipulation in C

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic allocation of memory using malloc()
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Accepting values from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Displaying the elements
    printf("The elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);

    return 0;
}