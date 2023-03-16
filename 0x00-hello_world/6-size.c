#include <stdio.h>
/**
 * main - function to help print size of computer types
 * Return: 0 when code is succesful
 */
int main(void)
{
	printf("size of char: %lu bytes(s)", sizeof(char));
	printf("size of int: %lu bytes(s)", sizeof(int));
	printf("size of long: %lu bytes(s)", sizeof(long));
	printf("size of long int: %lu bytes(s)", sizeof(long int));
	printf("size of float: %lu bytes(s)", sizeof(float));
	printf("size of long long int: %lu bytes(s)", sizeof(long long int));
	return (0);
}
