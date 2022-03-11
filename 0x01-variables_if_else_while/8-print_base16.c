#include <stdio.h>
/* 
 * main - Entry point 
 * Return - 0 , Always(succes)
 */
int main(void)
{
	char i;
	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	i = 'a';
	while (i < 'g')
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
