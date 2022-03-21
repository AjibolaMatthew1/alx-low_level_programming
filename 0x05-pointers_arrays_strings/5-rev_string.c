#include "main.h"

/**
 * rev_string - this function reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, length, length1;

	length = 0;
	length1 = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length1 = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length1];
		s[length1--] = tmp;
	}
}
