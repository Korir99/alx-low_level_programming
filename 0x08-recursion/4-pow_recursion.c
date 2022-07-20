#include "main.h"

/**
 * _pow_recursion -  function
 * @y: If y is lower than 0, the function should return -1
 * @x: is the numebr to be incremented
 * Return: the 0 value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
