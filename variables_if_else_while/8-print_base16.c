#include <stdio.h>

/**
 * main - print lower case hexadecimal
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;
	char alpha;
		for (number = 48; number < 58; number++)
		{
			putchar(number);
		}
		for (alpha = 'a'; alpha <= 'f'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
		return (0);
}
