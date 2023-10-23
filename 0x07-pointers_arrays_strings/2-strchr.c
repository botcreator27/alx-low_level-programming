#include "main.h"
#include <stdio.h>
/* locate a char in a string */

/**
 *_strchr - entry point of function
 *@s:string
 *@c: character
 *
 *Return: always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
