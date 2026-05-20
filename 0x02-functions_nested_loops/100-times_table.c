#include "main.h"

void separator(void);
long highest_place_value(long);

/**
 * print_times_table - Print multiplication table
 * Description: Function print multiplications table
 *		from 'n'.
 *
 * @n: Integer parameter for the number.
 *
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_times_table(int n)
{
	int x, y, xy;

	if (n > 15)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			xy = x * y;

			if (y != 0 && xy < 10)
				_putchar(' ');
			if (y != 0 && xy < 100)
				_putchar(' ');
			print_number((long)xy);
			if (y != n)
				separator();
		}
		_putchar('\n');
	}
}

/**
 * print_number - Print a number using _putchar
 * @n: Number to print
 *
 * Return: Nothing
 */
void print_number(long n)
{
	long rem = n, div = highest_place_value(n);

	if (!(n < 10))
		while (div >= 1)
		{
			_putchar((rem / div) + '0');
			rem %= div;
			div /= 10;
		}
	else
		_putchar(n + '0');
}

/**
 * separator - Print comma (,) and space (  )
 *
 * Return: Void
 */

void separator(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * highest_place_value - Check the value of a number
 *
 * @num: Long parameter of a number to be check
 *
 * Return: Long type value of a number e.g.
 *		456 returns 100 (Hundred).
 */

long highest_place_value(long num)
{
	long highest = 1;

	while (num >= 10)
	{
		num /= 10;
		highest *= 10;
	}

	return (highest);
}
