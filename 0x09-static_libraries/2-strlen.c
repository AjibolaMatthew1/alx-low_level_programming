#include "main.h"

/**
 * _strlen - this returns the length of the inputted string
 * @s: string to work on
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
