#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to return ptr containing copy of string
 * @str: the string to be copied
 *
 * Return: NULL for failure, else return ptr
 */
char *_strdup(char *str)
{
	char *fcopy;
	int a, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	fcopy = (char *)malloc((sizeof(char) * len) + 1);
	if (fcopy == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
		fcopy[a] = str[a];
	fcopy[len] = '\0';

	return (fcopy);
}
