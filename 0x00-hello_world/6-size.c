#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	char charType;
	int intType;
	long longInt;
	long long longlongInt;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongInt));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}

