#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums the number of arguments
 * @n: counts the number of variables passed
 *
 * Return: sum else 0 if n==0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list next;

	if (n == 0)
	return 0;

	va_start(next, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(next, int);
	}

	va_end(next);
	return (sum);
}

