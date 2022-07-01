#include <stdio.h>

/**
* main - prints the alphabets
*
* Return: - Always (success)
*/
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
