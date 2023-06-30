#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    static int buffer_index = 0;
    static int bytes_read = 0;

    char *line = NULL;
    int line_length = 0;

    while (1)
    {
        // Check if buffer needs to be refilled
        if (buffer_index >= bytes_read)
        {
            buffer_index = 0;
            bytes_read = read(fd, buffer, BUFFER_SIZE);
            if (bytes_read <= 0)
                break; // No more data to read or an error occurred
        }

        // Iterate through the buffer until a newline character is found
        while (buffer_index < bytes_read)
        {
            if (buffer[buffer_index] == '\n')
            {
                // Allocate memory for the line
                line = malloc((line_length + 1) * sizeof(char));
                if (line == NULL)
                    return NULL; // Error: unable to allocate memory

                // Copy the line from the buffer
                memcpy(line, buffer, line_length);
                line[line_length] = '\0'; // Null-terminate the line
                buffer_index++; // Move buffer_index past the newline character
                return line;
            }
            else
             {
                // Append the character to the line
                line_length++;
                buffer_index++;
            }
        }
    }

    // Check if there is remaining data in the buffer
    if (line_length > 0)
    {
        // Allocate memory for the last line
        line = malloc((line_length + 1) * sizeof(char));
        if (line == NULL)
            return NULL; // Error: unable to allocate memory

        // Copy the remaining data as the last line
        memcpy(line, buffer, line_length);
        line[line_length] = '\0'; // Null-terminate the line
    }

    return line; // Return the line or NULL if there is nothing else to read or an error occurred
}
