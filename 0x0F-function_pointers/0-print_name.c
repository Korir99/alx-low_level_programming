#include "function_pointers.h"

/**
* print_name - prints a name
* @name: the name
* @f: functio pointer
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
