#include "main.h"

/**
 * print_sign - Print sign
 * Descriprion _ Print sign carried by a number
 *
 * @n: Integer parameter for the number
 *
 * Return: 1 if number is greater than 0, 0 if n == 0 and -1 if n < 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int print_sign(int n)
{
	int i = 0;


	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}

	if (n == 0)
	{
		_putchar('0');
		i = 0;
	}

	if (n < 0)
	{
		_putchar('-');
		i = -1;
	}

	return (i);
}
