#include "main.h"

/**
 * print_number - A recursive function
 * Description: Function breaks down a long integer value recursively
 *		until it reach the smallest value (n < 10)
 *		Then print from the upper stack i.e.
 *		From left character of integer to the right
 * @n: Long integer type parameter to be check and print
 *
 * return: void
 *
 * Author: Usman Saheed
 */

void print_number(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * add - Add two integers
 * Description: Function add two integers and
 *		invoke print_number() function to check and print to the stdout
 *
 * @a: First integer parameter
 * @b: Second Integer parameter
 *
 * Return: Sum of a and b
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int add(int a, int b)
{
	long sum = (long)a + b;

	print_number(sum);
	_putchar('\n');

	return ((int)sum);
