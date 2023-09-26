#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that sums of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *top = head;

	while (top != NULL)
	{
		sum += top->n;
		top = top->next;
	}
	return (sum);
}
