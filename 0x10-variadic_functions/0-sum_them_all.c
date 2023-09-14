#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int k;
	va_list addition;

	va_start(addition, n);

	if (n == 0)
		return (0);

	for (k = 0; k < n; k++)
		sum += va_arg(addition, int);

	va_end(addition);

	return (sum);
}
