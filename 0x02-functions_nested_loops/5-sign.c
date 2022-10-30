#include "main.h"

/**
 * print_sign - unction that prints the sign of a number
 *
 * @n: The number in ASCII code
 *
 *
 * Return: 1 for greater than zero and 0 for zero and -1 for the rest
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
