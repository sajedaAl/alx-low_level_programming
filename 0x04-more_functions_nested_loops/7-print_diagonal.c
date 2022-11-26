#include "main.h"

/**
 * print_diagonal- print straight line n times.
 * @n: the number of times
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		if(i < (n-1))
			_putchar(92);
	}
	_putchar('\n');
}
