#include "main.h"
/**
 * print_rev- prints characters in reverse
 * @s: characters variable
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

