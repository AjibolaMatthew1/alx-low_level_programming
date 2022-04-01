#include <stdio.h>

/**
 * main - pritns number of arguments in the command line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char argument1[];
	
	printf("%d\n", argc);
	argument1 = argv[0];
	return (0);
}
