#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*@x: param
*Return: returns nothing
*/
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	if ((x == 2) || (x == 4))
	{
	continue;
	}
	else
	{
	_putchar(x);
	}
	}
	_putchar('\n');
}
