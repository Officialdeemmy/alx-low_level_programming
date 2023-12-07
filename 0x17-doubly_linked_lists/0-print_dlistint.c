#include "lists.h"

/**
 * print_dlistint - Prints all the elements of the dlistint_t list.
 * @h: Pointer to the head node of the linked list.
 * Return: Num of nodes on the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}
	return (n);
}
