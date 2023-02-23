#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count = 0;

	while (count < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
