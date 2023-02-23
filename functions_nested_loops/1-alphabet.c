#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - print alphabet lower case
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
