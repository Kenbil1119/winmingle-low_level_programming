#include "main.h"

void separator(void);
long highest_place_value(long);

/**
 * main - Print Fibonacci numbers
 * Description: Function prints Fibonacci numbers under 50
 *
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int old = 1, new = 1, temp = 0;

	while (new < 50)
	{
		print_number((long)new);
		if ((new + old) < 50)
			separator();
		else
			_putchar('\n');

		temp = old;
		old = new;
		new = temp + old;

	}

	return (0);
}

/**
 * print_number - Print numbers by character using _putchar()
 * @n: Long parameter for the number
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
