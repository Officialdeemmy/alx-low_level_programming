#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a index of the linked list.
 * @head: Pointer to a pointer of the first node of linked list.
 * @index: num of the node to be deleted.
 * Return: If sucess 1. Otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (count = 0; temp != NULL; count++)
	{
		if (count == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
