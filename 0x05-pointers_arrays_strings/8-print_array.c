#include <stdio.h>
#include "main.h"

/**
 * print_array: this prints the elements of the array
 *@a : the array to be printed
 * @n: this is the number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
