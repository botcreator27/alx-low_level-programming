/* locate a substring */
/**
 *_strstr - searches substring
 *@needle: substring
 *@haystack: string
 *
 *Return: 0 or null
 */

#include "main.h"
#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
