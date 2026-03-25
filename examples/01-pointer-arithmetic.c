# Pointer Arithmetic in C

Pointer arithmetic involves manipulating address values to navigate through memory locations. In C, you can perform various operations with pointers, such as incrementing, decrementing, and adding integer values. Below are practical examples demonstrating different techniques of pointer arithmetic for memory manipulation.

## Example 1: Basic Pointer Arithmetic
```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // Pointing to first element

    for (int i = 0; i < 5; i++) {
        printf("Value at index %d: %d\n", i, *(p + i)); // Using pointer arithmetic
    }
    return 0;
}
```

## Example 2: Incrementing Pointers
```c
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("First value: %d\n", *p);
    p++; // Increment pointer to point to the next integer
    printf("Second value: %d\n", *p);
    return 0;
}
```

## Example 3: Decrementing Pointers
```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr + 4; // Pointing to the last element

    printf("Last value: %d\n", *p);
    p--; // Decrement pointer to point to the previous integer
    printf("Second last value: %d\n", *p);
    return 0;
}
```

## Example 4: Pointer Subtraction
```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = arr + 4; // Pointing to last element
    int *p2 = arr;   // Pointing to first element

    int difference = p1 - p2; // Number of elements between p1 and p2
    printf("Number of elements between pointers: %d\n", difference);
    return 0;
}
```

## Conclusion
Pointer arithmetic is a powerful feature in C that allows for flexible and efficient memory management. Using pointers appropriately can lead to improved performance and better control over memory allocation.