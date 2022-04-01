#include "main.h"

/**
 * _memcpy - copies n bytes from mem area src to dest
 * @dest: the destination to be copied to
 * @src: where the string is copied from
 * @n: the amount of bytes to be copied from src
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
