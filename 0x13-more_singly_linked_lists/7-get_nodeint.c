#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: head data node
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
