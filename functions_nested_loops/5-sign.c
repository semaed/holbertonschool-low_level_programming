#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: check value
 * Return: Always 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
