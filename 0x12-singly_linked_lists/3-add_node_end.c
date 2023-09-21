#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int m;

	for (m = 0; str[m]; m++)
		;
	return (m);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new-list, *old-list;

	if (str == NULL)
		return (NULL);
	new-list = malloc(sizeof(list_t));

	if (new-list == NULL)
		return (NULL);
	new-list->str = strdup(str);

	if (new-list->str == NULL)
	{
		free(new-list);
		return (NULL);
	}
	new-list->len = _strlen(new-list->str);

	new-list->next = NULL;

	if (*head == NULL)
	{
		*head = new-list;
		return (new-list);
	}
	old-list = *head;
	while (old-list->next)
		old-list = old-list->next;
	old-list->next = new-list;
	return (new-list);
}
