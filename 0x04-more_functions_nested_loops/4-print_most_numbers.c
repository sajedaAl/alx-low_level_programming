#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	char num[8] = "01356789";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(num[a]);
	}
	_putchar('\n');
}
