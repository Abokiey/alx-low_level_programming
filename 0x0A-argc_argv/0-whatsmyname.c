#include <stdio.h>
#include "main.h"

/**
 * main - entry of the code
 * @argc: argument count
 * @argv: an array of an argument
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);

}
