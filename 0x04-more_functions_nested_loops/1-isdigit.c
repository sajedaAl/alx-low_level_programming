#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: is a number
 *
 * Return: (1) if its upper and return (0) if not
 */
int _isdigit(int c)
{
	if (c >= 48)
	{
		if (c <= 57)
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
