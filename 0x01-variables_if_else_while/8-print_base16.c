#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int i;
	char hex;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (hex = 'a'; hex <= 'f'; hex++)
	putchar(hex);
	putchar('\n');

	return (0);
}
