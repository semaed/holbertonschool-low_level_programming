#include <stdio.h>

/**
 * main - print lowercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')

	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
