/* copy the string pointed to */
/**
 *_strcpy - copy the string
 *@dest: destination value
 *@src: value
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
