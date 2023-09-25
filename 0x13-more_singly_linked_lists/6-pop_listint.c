#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *pop_del;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	pop_del = *head;
	*head = pop_del->next;

	n = pop_del->n;
	free(pop_del);

	return (n);
}
