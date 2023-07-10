#include "main.h"

/**
 * exit_code - prints an error messages with their values
 * @error: if error it gives the exit value.
 * @s: string names.
 * @fd: file descriptor
 * Return: 0 if successful
 **/
int exit_code(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copy file a to b
 * @argc: argument count
 * @argv: argument vector.
 * Return: 0 (success), 97-100(exit errors).
 */

int main(int argc, char *argv[])
{
	int cp_from, cp_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		exit_code(97, NULL, 0);
	}
	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
		exit_code(98, argv[1], 0);
	}
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (cp_to == -1)
	{
		exit_code(99, argv[2], 0);
	}
	while ((rd = read(cp_from, buffer, sizeof(buffer))) > 0)
	{
		wr = write(cp_to, buffer, rd);
		if (wr == -1)
		{
			exit_code(99, argv[2], 0);
		}
	}
	if (rd == -1)
	{
		exit_code(98, argv[1], 0);
	}
	if (close(cp_from) == -1)
	{
		exit_code(100, argv[2], 0);
	}

	if (close(cp_to) == -1)
	{
		exit_code(100, argv[1], 0);
	}

	return (0);
}
