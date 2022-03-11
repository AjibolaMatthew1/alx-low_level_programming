#include <stdio.h>
/*
 *main - Entry point 
 * Description - Prints out the alphabets
 * Return - 0 Always(Success)
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
