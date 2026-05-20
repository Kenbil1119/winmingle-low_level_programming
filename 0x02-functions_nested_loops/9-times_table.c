#include "main.h"

/**
 * times_table - Print multiplication table
 * Description: Function print multiplications table
 *		from 0 - 9 of 9 with separator
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void separator(void);

void times_table(void)
{
	int x, y, xy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			xy = x * y;

			if (y != 0 && xy < 10)
				_putchar(' ');

			if (xy > 9)
			{
				_putchar((xy / 10) + '0');
				_putchar((xy % 10) + '0');
			}
			else
				_putchar(xy + '0');
			if (y != 9)
				separator();
		}
		_putchar('\n');
	}
}

/**
 * separator - Print coma ',' followed by space ' '
 *
 * Return: void
 */

void separator(void)
{
	_putchar(',');
	_putchar(' ');
}
