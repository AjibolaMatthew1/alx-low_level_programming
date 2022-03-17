#include "main.h"

/**
 *print_line - this functions print a line
 *@n: the number of times it prints it
 *Return: nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
