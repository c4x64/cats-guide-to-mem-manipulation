// Example of Buffer Overflow in C
#include <stdio.h>
#include <string.h>

void buffer_overflow_function() {
    char buffer[10];
    strcpy(buffer, "This is a long string that exceeds buffer.");
}

int main() {
    buffer_overflow_function();
    return 0;
}