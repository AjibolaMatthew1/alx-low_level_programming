#include "main.h"

/**
 *print_square - this prints # in form of squares
 *@size: this specifies the shape of the square
 *Return: nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
