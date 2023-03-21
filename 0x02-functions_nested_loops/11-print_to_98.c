#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print upto 98 from any given no.
 * @n: any given value
 */



void print_to_98(int n)

{
	int i;

	if (n >= 0 && n <= 98)

	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = 0 ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d, ", n);
}
