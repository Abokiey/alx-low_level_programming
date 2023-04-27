#include <stdio.h>

void execute_first(void) __attribute__ ((constructor));

/**
 * execute_first - prints a sentence before the main function.
 */
void execute_first(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}

