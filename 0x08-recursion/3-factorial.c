#include "main.h"

/**
 * factorial - returns factorial of a given numher
 * @n: number in which factorial is to be computed on
 * Return: integer valu of the factorial
 */
int factorial(int n)
{
	if (n <= 1 && n >= 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
