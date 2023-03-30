#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: destination
 * @src: source
 * @n: number of strings to copy
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);

}
