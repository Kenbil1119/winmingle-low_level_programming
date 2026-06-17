#include "main.h"

/**
 * print_diagsums - Print the sum of each diagonals of a square matrix
 *
 * @a: Pointer to the square matrix (Multidimentional array)
 * @size: Size of the square matrix (side)
 *
 * Return: void/nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_diagsums(int *a, int size)
{
	int row = 0, column = 0,
	    f_sum = 0, s_sum = 0;

	for (; row < size; row++, column += size + 1)
		f_sum += a[column];

	row = 0, column = size - 1;

	for (; row < size; row++, column += size - 1)
		s_sum += a[column];

	printf("%u, %u\n", f_sum, s_sum);
}
