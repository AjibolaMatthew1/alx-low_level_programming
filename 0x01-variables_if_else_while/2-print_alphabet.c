#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main()
{
	char c; 
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
