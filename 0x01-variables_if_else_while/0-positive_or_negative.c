#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/**
 *main - prints whether number is positive, negative or zero
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND MAX / 2;
	if (n > 0)
		{
		printf("%d is positive\n", n)
		}
	else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
	else
		{
			printf("%d is zero\n", n);
		}
	return(0)
}
