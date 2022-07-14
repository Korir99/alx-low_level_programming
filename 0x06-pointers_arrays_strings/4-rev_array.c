#include "main.h"
#include <string.h>

/**
* reverse_array - reverses content of an array
* @a: an array
* @n: number of elements
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int *p, i, temp, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		temp = a[k];
		a[k] = *p;
		*p = temp;
		p--;
	}
}
