#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "sss.h"

int main() {
    int fd; // file descriptor
    char *line;

    // Open the file
    fd = open("ding", O_RDONLY);
    if (fd == -1) {
        perror("Failed to open the file");
        return 1;
    }

    // Read lines from the file using get_next_line
    while ((line = get_next_line(fd)) != NULL) {
        printf("%s$\n", line);
        free(line);
    }

    // Close the file
    if (close(fd) == -1) {
        perror("Failed to close the file");
        return 1;
    }

    return 0;
}
