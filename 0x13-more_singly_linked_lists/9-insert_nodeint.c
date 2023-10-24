#include "lists.h"

/**
 * create_nodeint - creates new node
 * @n: the data
 * Return: pointer address of the node
 */

listint_t *create_nodeint(int n)
{
	listint_t *nodeint;

	nodeint = malloc(sizeof(listint_t));
	if (nodeint == NULL)
		return (NULL);

	nodeint->n = n;
	nodeint->next = NULL;

	return (nodeint);
}
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head data
 * @idx: index of the list where the new node should be added
 * @n: the new data node
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeint;
	listint_t *temp;
	listint_t *temp_old;
	unsigned int j;

	temp = *head;
	if (head == NULL)
		return (NULL);

	nodeint = create_nodeint(n);
	if (nodeint == NULL)
		return (NULL);
	if (*head == NULL || idx == 0)
	{
		*head = nodeint;
		return (nodeint);
	}

	for (j = 0; j < idx - 1 && temp && idx != 0; j++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);

	if (idx == 0)
		nodeint->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = nodeint;
		nodeint->next = temp_old;
	}

	return (nodeint);
}
