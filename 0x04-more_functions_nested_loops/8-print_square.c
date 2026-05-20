#include "main.h"

/**
 * print_square - Print square with '#'
 *
 * @size: Integer parameter for the size of square
 *
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_square(int size)
{
	int length, height = size;

	while (height >= 0)
	{
		length = size;
		while (length)
		{
			_putchar('#');
			length--;
		}
		_putchar('\n');
		height--;
	}
}
