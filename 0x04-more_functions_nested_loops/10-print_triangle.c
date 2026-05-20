#include "main.h"

/**
 * print_triangle - Print Right angle triangle with '#' on call
 *
 * @size: Integer parameter for the size of triangle
 *
 * Return: EOF after execution
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_triangle(int size)
{
	int b, h = size, hash = 0;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	while (size)
	{
		b = size;
		while (b - 1)
		{
			_putchar(' ');
			b--;
		}

		hash = h - (size - 1);
		while (hash)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
		size--;
	}

