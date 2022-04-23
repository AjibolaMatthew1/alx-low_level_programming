#include "lists.h"

/**
 * list_len - this returns the number of elements in a list
 * @h: this is the list_t list to be checked
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
