#include "main.h"

/**
 *more_numbers - this prints from 0 to 14, ten times
 *
 *Return: nothing;
 */
void more_numbers(void)
{
	int i , j;

	i = 0;
	while(i < 11)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
