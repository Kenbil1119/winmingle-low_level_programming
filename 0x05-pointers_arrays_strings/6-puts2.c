#include "main.h"

/**
 * puts2 - Print first and skip next character of a string with new line
 *
 * @str: Pointer to string address
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void puts2(char *str)
{
	long i;

	for (i = 0; str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
