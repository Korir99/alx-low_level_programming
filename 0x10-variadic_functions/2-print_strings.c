#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings
* @separator: string to be printed between the strings
* @n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	char *ptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
	if (ptr == NULL)
		printf("nil");
	else
		printf("%s", ptr);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
