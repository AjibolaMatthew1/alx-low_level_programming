#include "main.h"

/**
 * _strpbrk - it locates the first occurence in the string s
 * @s: the string s to be searched
 * @accept: the one to be checked in s
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
		return ('\0');
	}
}
