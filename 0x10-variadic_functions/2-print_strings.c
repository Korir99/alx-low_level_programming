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
	unsigned int i;
	va_list ap;
	char *ptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
	if (ptr == NULL)
		printf("nil");
	else
		printf("%s", ptr);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
