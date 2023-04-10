#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of the argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
