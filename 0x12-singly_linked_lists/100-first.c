#include <stdio.h>
void printBeforeMain(void) __attribute__((constructor));

/**
 * printBeforeMain - this function executes before main
 * Return: Nothing
 */
void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
