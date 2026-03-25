// Direct Memory Access and Volatile Pointers Example in C

#include <stdio.h>
#include <stdlib.h>

// Struct to demonstrate volatile pointer
struct VolatileStruct {
    volatile int value;
};

int main() {
    // Allocate memory
    struct VolatileStruct *ptr = (struct VolatileStruct *)malloc(sizeof(struct VolatileStruct));
    if (!ptr) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    // Direct memory access
    ptr->value = 10; // Directly accessing the value
    printf("Value before change: %d\n", ptr->value);

    // Change the value directly
    *((int *)ptr) = 20; // Directly manipulate the memory
    printf("Value after change: %d\n", ptr->value);

    // Clean up
    free(ptr);
    return 0;
}