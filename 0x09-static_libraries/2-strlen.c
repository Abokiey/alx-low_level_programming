#include "main.h"
/**
 * _strlen - string length
 * @s: string value
 * Return: return length of the string
 */


int _strlen(char *s)

{

	int length;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}

	return (length);

}
