#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is q
 */
int _strlen(const char *s)
{
	int q = 0;

	while (s[q] != '\0')
	{
		q++;
	}
	return (q);
}

/**
 * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The number of nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *total;

	total = malloc(sizeof(list_t));
	if (total == NULL)
		return (NULL);
	total->str = strdup(str);

	total->len = _strlen(str);

	total->next = *head;

	*head = total;

	return (total);
}
