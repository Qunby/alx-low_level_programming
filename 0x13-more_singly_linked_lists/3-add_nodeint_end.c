#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - function to add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: address of the added element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_value;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	new_value = malloc(sizeof(listint_t));

	if (new_value == NULL)
		return (NULL);
	new_value->n = n;
	new_value->next = NULL;

	if (*head == NULL)
	{
	*head = new_value;
		return (new_value);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_value;
	return (new_value);
}
