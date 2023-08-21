#include "main.h"

/**
 * puts2 - skipping digits in array
 * @str: array defined
 * Return: Always 0
 */
void puts2(char *str)
{
	int strings;

	for (strings = 0; str[strings] != '\0'; strings++)
		if (strings % 2 == 0)
			_putchar(str[strings]);
	_putchar('\n');
}
