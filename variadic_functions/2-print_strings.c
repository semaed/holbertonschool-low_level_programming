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
	
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ptr = "(nil)";
		if (list != NULL)
		{
			printf("%s", va_arg(list, char *));
		}

		else	
		{
		     printf("%s", ptr);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
			va_end(list);
			printf("\n");
}
