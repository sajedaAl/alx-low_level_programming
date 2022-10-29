#include "main.h"
/**
 * main - Alphaet count
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;
	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
