#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is a charchter
 *
 * Return: (1) if its upper and return (0) if not
 */
int _isupper(int c)
{
	if (c >= 65)
	{
		if (c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
