#include "main.h"

/**
 *_isupper - it checks for uppercase
 * @c: character to be checked
 *Return: 0 for non-upper and 1 for upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

