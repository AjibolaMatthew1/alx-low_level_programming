#include "main.h"

/**
 * _strncpy - it copies the string to the destination
 *@dest: the destination string 
 *@src: the source string 
 *@n: the max amount of bytes to be copied
 *Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
