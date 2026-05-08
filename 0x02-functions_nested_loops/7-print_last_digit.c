#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 *
 * @num: Integer parameter for the number.
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int print_last_digit(int num)
{
	_putchar((num % 10) + '0');

	return (num % 10);
}
