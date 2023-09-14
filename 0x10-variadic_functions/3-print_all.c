#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int k;
	int rep;
	char *str;
	va_list print_anything;

	va_start(print_anything, format);
	k = 0;
	while (format != NULL && format[k] != '\0')
	{
		switch (format[k])
		{
			case 'c':
				printf("%c", va_arg(print_anything, int));
				rep = 0;
				break;
			case 'i':
				printf("%i", va_arg(print_anything, int));
				rep = 0;
				break;
			case 'f':
				printf("%f", va_arg(print_anything, double));
				rep = 0;
				break;
			case 's':
				str = va_arg(print_anything, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				rep = 0;
				break;
			default:
				rep = 1;
				break;
		}
		if (format[k + 1] != '\0' && rep == 0)
			printf(", ");
		k++;
	}
	printf("\n");
	va_end(print_anything);
}
