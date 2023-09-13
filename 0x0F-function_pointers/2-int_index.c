#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: array
  * @size: number of elemnts in the array
  * @cmp:function to compare values
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int fig = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (fig < size)
			{
				if (cmp(array[fig]))
					return (fig);

				fig++;
			}
		}
	}

	return (-1);
}
