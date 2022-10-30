#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9
 *
 * Return: no return
 */
void more_numbers(void)
{
	char num[20] = "01234567891011121314";
	int a, x;

	for (x = 0; x <= 10; x++)
	{
		for (a = 0; a < 20; a++)
		{
			_putchar(num[a]);
		}
		_putchar('\n');
	}
}
