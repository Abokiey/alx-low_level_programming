#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of the argument
 * Return: always 0
 */

int main(int argc, char *argv[])

	int result, num, i, j, k;

	if (argc == 1)
	{
		printf("0\n")
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0;argv[i][j] !='\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{

				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result +=num;
	}
	printf("%d\n", sum);
	return (0);
