#include "main.h"
/**
 * _memcpy - function to copy memory area
 * @dest: destination memory
 * @src: source memory to be copied from
 * @n: number of bytes
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int i = n;
	int j = 0;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];

		n--;
	}
	return (dest);
}
