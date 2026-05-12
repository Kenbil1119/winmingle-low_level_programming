#include "main.h"

long highest_place_value(long);
void separator(void);
void print_number(long);

/**
 * print_to_98 - Print from any number to 98
 * Description: Invoke print_number() to print the numbers.
 *		Call separator() to print comma and space.
 *		Call _putchar() to print neccessary character
 *		Invoke highest_place_value() to determine the value of number.
 *
 * @n: Integer parameter for the number
 *
 * Return: 0
 *
 * Author: Usman Saheed [www.github.com/kenbil1119/]
 * Program: WinMingle Community C Training
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i >= 98; i--)
		{
			print_number((long)i);
			if (i != 98)
				separator();
			else
				_putchar('\n');
		}
	else
		for (i = n; i <= 98; i++)
		{
			print_number((long)i);
			if (i != 98)
				separator();
			else
				_putchar('\n');
		}
	return;
}

/**
 * print_number - Print number(s)
 * Description: The function print any number pass to it as
 *		a long parameter type  on call, and use the _putchar() to print
 *		it as character(s) to the stdout, irrespective of sign
 *
 * @n: A long parameter type of number
 *
 * Return: Nothing to the stream
 */

void print_number(long n)
{
	long rem, div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/*if (n > 10)*/
	if (!(n < 10))
	{
		rem = n;
		div = highest_place_value(n);

		while (div >= 1)
		{
			_putchar((rem / div) + '0');
			rem %= div;
			div /= 10;
		}
	}
	else
		_putchar(n + '0');

	return;
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

	return;
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
	
	/*while (num < 10)*/ /*First bug made*/
	/*while (num > 10)*/ /*Second bug made*/
	while (num >= 10)
	{
		num /= 10;
		highest *= 10;
	}
	
	return (highest);
}
