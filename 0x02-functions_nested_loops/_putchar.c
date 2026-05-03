#include "main.h"
#include <stdio.h>

/**
 * _putchar - Print Character
 * Description: Print character to the stdout using the putc()
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _putchar(int c)
{
	if (c <= 0)
		return (EOF);
	putc(c, stdout);

	return (c);
}
