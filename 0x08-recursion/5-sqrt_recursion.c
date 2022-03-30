#include "main.h"

int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - this prints the square root of a number
 * @n: the number to be worked on
 * Return: an integer of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - trying to find the natural number
 * @n: the number to calculate on
 * @i: the test natural number
 * Return: the natural number
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion(n, i + 1));
}
