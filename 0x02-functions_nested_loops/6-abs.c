#include "main.h"

/**
 *_abs - computes the absolute value
 *@c:  integer
 *Return: absolute value or 0
 */

int _abs(int c)
{
	if (c > 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
