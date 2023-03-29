#include "main.h"

/**
 * _strcat - concartinate to dest
 * @dest: pointer
 * @src: pointer
 * Return: return the pointer dest
 */

char *_strcat(char *dest, char *src)

{
	int i;
	int destlen;
	int srclen;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
