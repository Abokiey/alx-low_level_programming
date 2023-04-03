#include "main.h"

/**
 *_memset - fill memory with constant bytes
 *@s: pointer
 *@b:pointer
 *@n:pointer
 *Return: always return 0
 */

char *_memset(char *s, char b, unsigned int n)


{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);

}
