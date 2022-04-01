#include <stdio.h>

/**
 * main - entry point
 * @argv[] - argument vector
 * Return - 0 (success)
 */
int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%s \n", argv[0]);
			break;
		}
	}
	return (0);
}
