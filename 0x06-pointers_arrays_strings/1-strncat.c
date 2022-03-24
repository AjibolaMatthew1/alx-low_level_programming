#include "main.h"

/**
 * _strncat - Concatenates a source string to a dest string
 * @dest: the string to be concatenated on
 * @src: the string that is being concatenated
 * @n: the maximum number of src bytes to be concatenated.
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
