#include "main.h"

/**
* print_chessboard - Prints a 8x8 chessboard.
* @a: Pointer of an array of 8x8.
**/

void print_chessboard(char (*a)[8])

{

	int i, j;

	i = 0;
	while (i < 8)
	{
	j = 0;
	while (j < 8)
	{
	_putchar(a[i][j]);
	if (j == 7)
	_putchar(10);
	j++;
	}
		i++;
	}
}
