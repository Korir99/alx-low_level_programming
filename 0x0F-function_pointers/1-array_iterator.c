#include "function_pointers.h"

/**
* array_iterator - execute a function
* @array: array to execute function
* @size: size of array
* @action: pointer to function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
