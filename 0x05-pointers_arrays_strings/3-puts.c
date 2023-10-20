/* print a string */

/**
*_puts - prints a string
*@str - str to be printed
*
*Return: void
*/

#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] ! = 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}
