#include "main.h"

/**
 * _strcat - this functions concatenates strings together.
 * @dest: this is the string that would be concatenated to.
 * @src: this is the string that would be added to dest
 * Return: char
 */
char *_strcat(*dest, char *src)
{
	int i, j = 0, k, l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	l = i + 1;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (k = 0; k <= j + 1; k++)
	{
		while (l > i && l < (i + j + 1))
		{
			dest[l] = src[k];

		}
	}
	return (dest);
}
