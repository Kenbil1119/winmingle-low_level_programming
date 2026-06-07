#include "main.h"

long highest_place_value(long);

/**
 * print_number - Print number using _putchar
 * @n: Number to print
 *
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program WinMingle Community C Training
 */

void print_number(int n)
{
	long rem, div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	rem = n;
	div = highest_place_value(n);

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
