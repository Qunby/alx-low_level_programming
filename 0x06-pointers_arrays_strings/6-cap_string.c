#include "main.h"

/**
 * cap_string - capitalizes all word in a string
 * @s: string
 * Return: Always o
 */
char *cap_string(char *s)
{
	int c = 0, b;

	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + c))
	{
		if (*(s + c) >= 'a' && *(s + c) <= 'z')
		{
			if (c == 0)
				*(s + c) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (a[b] == *(s + c - 1))
						*(s + c) -= 'a' - 'A';
				}
			}
		}
		c++;
	}
	return (s);
}

