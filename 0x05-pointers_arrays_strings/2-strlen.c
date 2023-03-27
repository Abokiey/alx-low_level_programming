#include "main.h"

/**
 * _strlen - string length
 * @s: string value
 * Return: return length of the string
 */


int _strlen(char *s)

{
	int i;
	int length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);

}
