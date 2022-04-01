#include "main.h"

/**
 *_isdigit - checks if the input is a digit
 * @c : the number to be checked on
 *Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
