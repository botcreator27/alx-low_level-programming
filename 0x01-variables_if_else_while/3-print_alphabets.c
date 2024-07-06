#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Return: Always success
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}
