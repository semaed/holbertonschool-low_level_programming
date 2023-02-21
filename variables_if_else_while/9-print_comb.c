#include <stdio.h>

/**
 * main - write combination single digit
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n = 48;

	while (n <= 57)

	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);

}
