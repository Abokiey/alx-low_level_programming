#include "main.h"
/**
 * times_table - times table from 0 to 9
 * @i - vaariable
 * @k - variable
 * @j - variable
 */


void times_table(void)

{
	int i, j, k;

	for (i = 1 ; i <= 9 ; i++)
	{
		for (k = 0 ; k <= 9 ; k++)
			j = k * i;
				if (k == 0)

			{
				_putchar(j + '0');
			}

				if (j < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');

			}
				else if (j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}


		_putchar('\n');
	}
}
