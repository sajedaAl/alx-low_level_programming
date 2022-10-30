#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a, x, y, z;

	for (a = 48; a < 51; a++)
	{
		for (x = 48; x < 52; x++)
		{
			for (y = 48; y < 54; y++)
			{
				for (z = 48; z <= 57; z++)
				{
					if (a >= 51 && x >= 52)
					{
						break;
					}
					_putchar(a);
					_putchar(x);
					_putchar(58);
					_putchar(y);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}
