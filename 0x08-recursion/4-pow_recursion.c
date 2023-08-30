#include "main.h"

/**
 * _pow_recursion - function to print result of base value raised to power
 * @x: integer
 * @y: integer
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
