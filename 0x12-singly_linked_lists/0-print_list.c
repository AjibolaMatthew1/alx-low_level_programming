#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - this functions prints the elements of a linked list
 * @h: this is the linked list
 * Return: It returns the number of nodes present in the list
 */

size_t print_list(const list_t *h)
{
	int node_counter = 0;
	const list_t *iter;

	iter = h;
	if (iter == NULL)
	{
		printf("Error in executing this code.\n");
	}
	else
	{
		while (iter)
		{
			if (!iter->str)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", iter->len, iter->str);
			}
			node_counter += 1;
			iter = iter->next;
		}
	}
	return (node_counter);
}
