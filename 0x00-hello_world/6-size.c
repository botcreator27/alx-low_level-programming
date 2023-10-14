/* this file prints the size of the various types */

/**
 *main - this is the entry point of the function
 *
 *sizeof - prints the size of the specified type
 *
 *Return: Always 0
 */

int main(void)
{
	char c;
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of an long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: % lu byte(s)\n", sizeof(float));

	return (0);
}
