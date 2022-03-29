#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence
 * of character c in the string s
 * @s: string to be checked
 * @c: the character to be searched for
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
		else
		{
			return ('\0');
		}
	}
}
