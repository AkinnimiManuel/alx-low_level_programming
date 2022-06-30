#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	double d;
	char c;

	printf("Size of a char: %lu. \n", sizeof(c));
	printf("Size of an int: %lu. \n", sizeof(i));
	printf("Size of a long int: %lu. \n", sizeof(l));
	printf("Size of a long long int: %lu \n", sizeof(ll));
	printf("Size of a float: %lu. \n", sizeof(d));
	return (0);
}
