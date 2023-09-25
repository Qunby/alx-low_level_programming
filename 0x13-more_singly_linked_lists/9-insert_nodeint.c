#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function to insert a node in a list at given index
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *old_value, *new_value;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		old_value = *head;
		for (i = 0; i < idx - 1 && old_value != NULL; i++)
		{
			old_value = old_value->next;
		}
		if (old_value == NULL)
			return (NULL);
	}

	new_value = malloc(sizeof(listint_t));

	if (new_value == NULL)
		return (NULL);

	new_value->n = n;
	if (idx == 0)
	{
		new_value->next = *head;
		*head = new_value;
		return (new_value);
	}
	new_value->next = old_value->next;
	old_value->next = new_value;

	return (new_value);
}
