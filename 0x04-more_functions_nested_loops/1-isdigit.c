#include "main.h"

/**
 * _isdigit - checks for digits
 *@c: character to be checked
 *Return: 1 for digit, 0 for non-digits
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
