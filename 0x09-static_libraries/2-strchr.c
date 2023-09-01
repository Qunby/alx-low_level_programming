#include "main.h"

/**
 * _strchr - functions to locate a character in a string
 * @s: the string
 * @c: occurrence of the character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
