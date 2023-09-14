#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list printer;

	va_start(printer, n);

	if (separator == NULL)
		separator = "";

	for (z = 0; z < n; z++)
	{
		printf("%d", va_arg(printer, int));
		if (z < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(printer);
}
