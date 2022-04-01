#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0(success) , 1 (failure)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if ((argc) == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= '0' || atoi(argv[i]) <= '9')
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
