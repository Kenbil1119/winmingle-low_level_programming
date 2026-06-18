#include "main.h"

/**
 * print_chessboard - Print Chessboard
 *
 * @a: Pointer to the chess array
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
		for (column = 0; column < 8; column++)
		{
			putchar(a[row][column]);
			if (!(column % 7) && column != 0)
				putchar(10);
		}
}
