#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 * Description: Print all single digit numbers using only two _putchar() call
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num + '0');
