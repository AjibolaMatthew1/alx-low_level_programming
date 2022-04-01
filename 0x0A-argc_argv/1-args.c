#include <stdio.h>

/**
 * main - pritns number of arguments in the command line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
