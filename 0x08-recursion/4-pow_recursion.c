#include "main.h"

/**
 * _pow_recursion - this prints the power of a number
 * @x: first number
 * @y: second number
 * Return: Number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y--));
	}
}
