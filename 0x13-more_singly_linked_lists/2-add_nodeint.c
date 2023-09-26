#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - function to add a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_value;

	if (head != NULL)
	{
		new_value = malloc(sizeof(listint_t));
		if (new_value == NULL)
			return (NULL);

		new_value->n = n;
		new_value->next = *head;
		*head = new_value;

		return (new_value);
	}

	return (NULL);
}
