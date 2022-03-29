#include "main.h"

/**
 * _strspn - return span of string contained in the other
 * @s: the string to be checked
 * @accept: the string to be searched
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, boolean;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		boolean = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				boolean = 0;
				break;
			}
		}
		if (boolean == 1)
		{
			break;
		}
	}
	return (i);
}
