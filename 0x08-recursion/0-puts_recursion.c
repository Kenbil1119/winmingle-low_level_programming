#include "main.h"

/**
 * _puts_recursion - Print string to the stdout then a newline using recursion
 *
 * @str: Pointer to string address
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
		_putchar('\n');

}
