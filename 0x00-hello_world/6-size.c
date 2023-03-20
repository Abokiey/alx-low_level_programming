#include <stdio.h>
/**
 * main - function to help print size of computer types
 * Return: 0 when code is succesful
 */
int main(void)
{
	printf("size of char: %ld bytes(s)\n", sizeof(char));
	printf("size of int: %ld bytes(s)\n", sizeof(int));
	printf("size of long: %ld bytes(s)\n", sizeof(long));
	printf("size of long int: %ld bytes(s)\n", sizeof(long int));
	printf("size of float: %ld bytes(s)\n", sizeof(float));
	printf("size of long long int: %ld bytes(s)\n", sizeof(long long int));
	return (0);
}
