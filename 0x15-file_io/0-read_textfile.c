#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file
 * @letters: The number of letters to be printed out
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_f, read_f, write_f;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	open_f = open(filename, O_RDONLY);
	read_f = read(open_f, buffer, letters);
	write_f = write(STDOUT_FILENO, buffer, read_f);

	if (open_f == -1 || read_f == -1 || write_f == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_f);

	return (write_f);
}
