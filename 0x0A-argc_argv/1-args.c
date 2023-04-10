#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of the argument
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))

{
	printf("%d\n", argc - 1);
	return (0);
}
