#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers from command line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (success) and 1(failure)
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
