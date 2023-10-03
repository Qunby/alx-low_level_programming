#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function to read and print text file to stdout
 * @filename: ptr to the file to read and print
 * @letters: number of bytes to print
 * Return: 0 if failed else number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    char *buffer = malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
    {
        close(fd);
        return 0;
    }

    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        close(fd);
        free(buffer);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read)
    {
        close(fd);
        free(buffer);
        return 0;
    }

    close(fd);
    free(buffer);

    return bytes_written;
}
