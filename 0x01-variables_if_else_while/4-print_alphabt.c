#include <stdio.h>

/**
* main - prints the alphabets
*
* Return: - Always (success)
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		else
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
