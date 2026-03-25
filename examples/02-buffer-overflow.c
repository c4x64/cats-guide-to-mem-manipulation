// buffer_overflow_example.c

#include <stdio.h>
#include <string.h>

// Function to demonstrate buffer overflow
void bufferOverflow() {
    char buffer[10]; // small buffer size
    printf("Enter a string: ");
    gets(buffer); // unsafe function, may cause buffer overflow
    printf("You entered: %s\n", buffer);
}

int main() {
    bufferOverflow();
    return 0;
}