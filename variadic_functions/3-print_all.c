#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	int i;
	int len = strlen(format);
	va_list list;
	i = 0;

	while (i < len)
	{
		switch (format[i]);


