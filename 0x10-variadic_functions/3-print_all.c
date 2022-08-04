#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
* print_char - prints characters
* @ap: argument
*/
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
* print_int - print integer
* @ap: argument
*/
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
* print_float - prints float
* @ap: argument
*/
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
* print_string - prints string
* @ap: argument
*/
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
/**
* print_all - prints anything
* @format: lists types of arguements
* Return: void
*/
void print_all(const char * const format, ...)
{
	var_t print[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};
	unsigned int i, j;
	va_list ap;

	char *separator = "";

	va_start(ap, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (print[j].var)
		{
			if (print[j].var == format[i])
			{
				printf("%s", separator);
				print[j].meth(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
