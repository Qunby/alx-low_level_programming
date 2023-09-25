#include "lists.h"

/**
 * sum_listint - function that sums of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
