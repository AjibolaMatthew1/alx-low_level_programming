#include "lists.h"

/**
 * print_listint - this function prints all the elements of a listint_t list
 * @h: the head of the nodes
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter += 1;
	}
	return (counter);
}
