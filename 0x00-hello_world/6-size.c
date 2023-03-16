#include <stdio.h>
/**
 * main - function to help print size of computer types
 * Return: 0 when code is succesful
 */
int main(void)
{
	printf("size of char: %lu bytes(s)\n", sizeof(char));
	printf("size of int: %lu bytes(s)\n", sizeof(int));
	printf("size of long: %lu bytes(s)\n", sizeof(long));
	printf("size of long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of float: %lu bytes(s)\n", sizeof(float));
	printf("size of long long int: %lu bytes(s)\n", sizeof(long long int));
	return (0);
}
