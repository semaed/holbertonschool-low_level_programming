#include "main.h"

/**
 * _abs - print absolute value
 * @num: check the code
 * Return: Always 0 (success)
 */

int _abs(int num)
{
	if (num > 0)
		return (num);
	else
		return (num * -1);
	_putchar('\n');
}
