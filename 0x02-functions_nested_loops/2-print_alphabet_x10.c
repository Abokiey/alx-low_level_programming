#include "main.h"

/**
 *print_alphabet_x10 - print alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int k;
	char i;

	for (k = 1 ; k <= 10 ; k++)
	{

		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}


}
