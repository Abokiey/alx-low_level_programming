#include "main.h"
#include <stdio.h>


/**
 * main - copies file a to b
 * @argc: argument count- should be 3 fils:./a.out copyfromfile copytofile.
 * @argv: copy from one file to another.
 * Return: 0 (success), 97-100(exit errors).
 */

int main(int argc, char *argv[])
{
	int cp_from, cp_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit(97);
	}

	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (cp_to == -1)
	{
	fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}

	while ((rd = read(cp_from, buffer, sizeof(buffer))) > 0)
	{
		wr = write(cp_to, buffer, rd);
		if (wr == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (rd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(cp_from) == -1)
	{
		fprintf(stderr, "Error: Can't close from file %s\n", argv[1]);
		exit(100);
	}

	if (close(cp_to) == -1)
	{
		fprintf(stderr, "Error: Can't close to file %s\n", argv[2]);
		exit(100);
	}

	return (0);
}
