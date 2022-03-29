#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence
 * @s: string to be checked
 * @c: the character to be searched for
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
