/* task 3 */
/**
 *_strlen - prints length of string
 *@s - string
 *
 *Return - the length
 */

#include "main.h"

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
		count ++;
	return (count);
}
