#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given position.
 * @h: Pointer to a pointer to the first node on the linked list.
 * @idx: Position index for node to be inserted.
 * @n: Num in the node.
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int count;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	temp = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new_node;
		else
		{
			new_node->next = temp;
			temp->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	for (count = 0; temp->next != NULL || count + 1 == idx; count++)
	{
		if (count + 1 == idx)
		{
			if (temp->next != NULL)
				temp->next->prev = new_node;
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
