#include "main.h"

/**
 * print_diagonal - Print diagonal line
 *
 * @n: Integer parameter for length of line
 *
 * Return: Void
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n < 1)
		return;

	while (i < n)
	{
		j = i;

		while (j)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');

		i++;

	}
}
