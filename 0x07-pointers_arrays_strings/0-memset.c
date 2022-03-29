#include "main.h"

/**
 * _memset - fills the first n bytes with character b
 * @s: the pointer that is filled by b
 * @b: b is what fills the string s
 * @n: the first n bytes to be filled.
 * Return: a pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
