/* lets copy the memory area */
/**
 *_memcpy - function entry point
 *@dest: final memory area
 *@src: initial memory area
 *@n: bytes copied
 *
 *Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
