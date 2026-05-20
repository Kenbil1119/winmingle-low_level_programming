#include "main.h"

long highest_place_value(long);

/**
 * main - Print sum
 * Description: Function print the sum of the multiples of
 *		3 or 5 from 0 - 1024 (excluding 1024)
 *
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int num = 1024, sum_of_multiples = 0, i = 0;

	while (i < num)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum_of_multiples += i;
		i++;
	}

	print_number((long)sum_of_multiples);
	_putchar('\n');

	return (0);
}

/**
 * print_number - Print number using _putchar()
 *
 * @n: Long parameter for the number
 *
 * Return: void
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
