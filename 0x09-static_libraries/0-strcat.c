#include "main.h"

/**
 * _strcat - this functions concatenates strings together.
 * @dest: this is the string that would be concatenated to.
 * @src: this is the string that would be added to dest
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
