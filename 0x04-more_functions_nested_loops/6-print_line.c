#include "main.h"

/**
 * print_line - Print line(s) '_' in 'n' times
 *
 * @n: Integer parameter
 *
 * Return: Void
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
