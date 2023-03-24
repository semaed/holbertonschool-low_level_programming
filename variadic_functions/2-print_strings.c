#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_string - prototype
 * @separator: pointer
 * @n: variable
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list (list);
	char *ptr;

	if (separator == NULL)
	{
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char *);
		if (list == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (separator && i !=  n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(list);
}