#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: no return
 */
void print_numbers(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
