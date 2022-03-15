#include "main.h"

/**
 *_isalpha: returns if string is a letter
 * @n: the int to check
 *Return: 1 if c is letter and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
