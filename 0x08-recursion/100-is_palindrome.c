#include "main.h"

int strlen(char *s);
int check_pal(char *s, int i, int len);

/**
 * is_palindrome - checks if input string is a palindrome
 * @s: the string to be checked
 * Return: 1 if palindrome and 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, strlen(s)));
}

/**
 * strlen - returns lenght of string
 * @s: string to be checked
 * Return: lenght of string
 */
int strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen(s + 1));
}

/**
 * check_pal - checks if string is a palindrome
 * @s: string to be checked
 * @i: counter
 * @len: length of string
 * Return: 1 if pal or 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(*s, i + 1, len - 1));
}
