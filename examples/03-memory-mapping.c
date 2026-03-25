# Memory Mapping Example in C

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

int main() {
    // Open the file
    int fd = open("example.txt", O_RDWR);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Get the size of the file
    struct stat sb;
    if (fstat(fd, &sb) == -1) {
        perror("Error getting file size");
        close(fd);
        return 1;
    }

    // Memory map the file
    char *mapped = mmap(NULL, sb.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (mapped == MAP_FAILED) {
        perror("Error mapping file");
        close(fd);
        return 1;
    }

    // Example: Modify the first character
    mapped[0] = 'Z';

    // Unmap and close the file
    if (munmap(mapped, sb.st_size) == -1) {
        perror("Error unmapping file");
    }
    close(fd);

    return 0;
}