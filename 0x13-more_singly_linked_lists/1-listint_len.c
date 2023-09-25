#include <stdio.h>
#include "lists.h"

/**
  * listint_len - function that Counts the elements in a linked list
  * @h: pointer to head of the linked list
  *
  * Return: The number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	int tally = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			tally++;
		}
	}

	return (tally);
}
