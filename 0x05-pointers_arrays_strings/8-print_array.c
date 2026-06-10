#include "main.h"

/**
 * print_array - Print nth of Array
 * - The nth pass must not pass the total number of elements of the array.
 *
 * @a: Pointer parameter to the address of array
 * @n: Number of element(s) to be print
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n < 1)
		return;

	for (i = 0; i < n; i++)
	{
		print_number(a[i]);
		if (i != n - 1)
			separator();
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
 *              456 returns 100 (Hundred).
 */

long highest_place_value(long num)
{
	long highest = 1;

	while (num >= 10)
	{
		num /= 10;
		highest *= 10;
	}

	_putchar('\n');

	return (0);
}
