#include "main.h"

/**
 * _puts - Print string to the stdout then a newline
 *
 * @str: Pointer to string address
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
