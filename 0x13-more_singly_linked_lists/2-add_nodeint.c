#include "lists.h"

/**
 * add_nodeint - function to add node at the beginning of list
 * @head: pointer to the pointer of the list
 * @n: data to copy
 * Return: pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newvalue;

	newvalue = malloc(sizeof(listint_t));
	if (newvalue == NULL)
		return (NULL);
	newvalue->n = n;
	newvalue->next = *head;
	*head = newvalue;

	return (*head);
}
