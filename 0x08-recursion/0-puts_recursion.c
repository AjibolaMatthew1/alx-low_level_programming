#include "main.h"

/**
 * _puts_recursion - this prints a string followed by a new line
 * @s: this is the string to be printed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	i = 0;
	if *(s + i) == '\0'
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i++;
	return (_puts_recursion(*(s + i)));
}
