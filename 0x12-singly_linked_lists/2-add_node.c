#include "lists.h"

/**
 * add_node - add a new piece of node at the begining
 * @head: head
 * @str: string to score
 * Return: address of new
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *new;
	unsigned int n, ele = 0;

	new = malloc(sizeof(size_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	n = 0;
	while (str[n] != '\0')
	{
		ele++;
		n++;
	}
	new->len = ele;
	new->next = *head;
	*head = new;

	return (*head);
}
