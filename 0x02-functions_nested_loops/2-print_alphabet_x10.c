#include "main.h"
/**
 * print_alphabet_x10 - Alphaet count
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, x;

	x = 0;

	while (x < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
			x++;
	}
}
