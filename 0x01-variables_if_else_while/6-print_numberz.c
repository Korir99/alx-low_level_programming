#include <stdio.h>

/**
* main - prints digit numbers
*
* Return: - 0 success
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
