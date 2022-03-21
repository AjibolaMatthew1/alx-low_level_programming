#include "main.h"

/**
 * puts - prints every other character starting from first
 * @str: string to be processed
 */
void puts2(char *str)
{
	int i;

	_putchar(str[0]);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
