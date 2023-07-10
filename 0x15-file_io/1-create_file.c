#include "main.h"

/**
 * create_file - Func to create a file
 * @filename: A pointer to the name of the file to be created
 * @text_content: a Pointer to the string of the file
 * Return: Return 1(success or -1(fails)
 */

int create_file(const char *filename, char *text_content)
{
	int open_f, write_f, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	open_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_f = write(open_f, text_content, i);

	if (open_f == -1 || write_f == -1)
		return (-1);
	close(open_f);

	return (1);
}
