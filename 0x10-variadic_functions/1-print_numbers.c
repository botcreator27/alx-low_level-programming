#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of integers passed
 * @separator: string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list element;

	va_start(element, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(element, int));

	if (separator != NULL && i != (n - 1))
	printf("%s", separator);
	}
	printf("\n");
	va_end(element);
}

