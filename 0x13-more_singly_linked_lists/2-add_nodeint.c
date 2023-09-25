#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - function that Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newvalue;

	if (head != NULL)
	{
		newvalue = malloc(sizeof(listint_t));
		if (newvalue == NULL)
			return (NULL);

		newvalue->n = n;
		newvalue->next = *head;
		*head = newvalue;

		return (newvalue);
	}

	return (NULL);
}
