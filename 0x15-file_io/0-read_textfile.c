#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, output, fd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	reader = read(fd, buff, letters);

	if (reader == -1)
	{
		free(buff);
		return (0);
	}

	output = write(STDOUT_FILENO, buff, reader);

	if (output == -1 || output != reader)
	{
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (reader);
}
