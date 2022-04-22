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
	size_t node_counter;

	node_counter = 0;
	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_counter += 1;
		h = h->next;
	}
	return (node_counter);
}
