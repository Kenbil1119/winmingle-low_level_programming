#include "main.h"

long highest_place_value(long);

/**
 * main - Print Sum of even Fibonacci numbers
 * Description: Function prints the sum of even Fibonacci numbers
 *		below 4,000,000
 *
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int o_term = 0, l_term = 1, n_term = o_term + l_term;
	long sum = 0;

	while (n_term <= 4000000)
	{
		if (!(n_term % 2))
			sum += n_term;

		o_term = l_term;
		l_term = n_term;
		n_term = o_term + l_term;
	}

	print_number(sum);
	_putchar('\n');

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
