#include "main.h"

/**
 * puts_half - Print the last half of a string with newline
 *
 * @str: Pointer to the string/buffer
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void puts_half(char *str)
{
	long i, length = 0;

	if (str ==NULL)
		return;

	while(str[length])
		length++;
	for (i = length / 2; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
