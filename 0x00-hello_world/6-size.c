#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu bytes(s)\n", sizeof(a));
	printf("size of an int: %lu bytes(s)\n", sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(d));
	printf("size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}
