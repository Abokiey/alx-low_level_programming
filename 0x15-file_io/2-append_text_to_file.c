#include "main.h"

/**
 * append_text_to_file - Function to appends text to  a file
 * @filename: Pointer to the name of the file
 * @text_content: Pointer to string to be added to the file
 * Return: 1 (Sucess) -1(fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_f, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	write_f = write(fd, text_content, i);

	if (fd == -1 || write_f == -1)
		return (-1);
	close(fd);

	return (1);
}
