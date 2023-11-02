#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    size_t total_read = 0;
    char buffer[letters];
    ssize_t read_size;

    while (total_read < letters) {
        read_size = fread(buffer, 1, letters - total_read, file);

        if (read_size == 0) {
            break;
        }

        total_read += read_size;
        if (write(STDOUT_FILENO, buffer, read_size) != read_size) {
            fclose(file);
            return 0;
        }
    }

    fclose(file);
    return total_read;
}
