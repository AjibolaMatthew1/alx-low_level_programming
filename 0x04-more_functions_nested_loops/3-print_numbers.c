#include "main.h"

/**
 *print_numbers -prints from number 0 to 9
 *
 *Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
