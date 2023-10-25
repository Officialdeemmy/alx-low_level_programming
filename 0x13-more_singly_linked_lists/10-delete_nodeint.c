#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of linked list
 * @head: head link
 * @index: index of the node that should be deleted
 * Return: -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *nodeint;
	unsigned int j;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	for (j = 0; j < index - 1 && temp && index != 0; j++)
		temp = temp->next;
	if (!temp)
		return (-1);
	if (index == 0)
	{
		nodeint = temp->next;
		free(temp);
		*head = nodeint;
	}

	else
	{
		if (temp->next == NULL)
			nodeint = temp->next;
		else
			nodeint = temp->next->next;

		free(temp->next);
		temp->next = nodeint;
	}

	return (1);
}
