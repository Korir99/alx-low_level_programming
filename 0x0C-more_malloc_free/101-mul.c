#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main - Prints the program name.
* @argc: Number of commmand arguments
* @argv: Array of strings of the size of argc
* Return: 0
**/

int main(int argc, char *argv[])
{

	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
