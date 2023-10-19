#include "lists.h"

/**
 * list_len - length of list
 * @h: head
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
		h = h->next;
		ele++;
	}

	return (ele);
}
