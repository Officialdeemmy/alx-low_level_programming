#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list.
 * @head: Pointer to the first node of linked list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
