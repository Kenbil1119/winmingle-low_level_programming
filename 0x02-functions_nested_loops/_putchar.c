#include "main.h"
#include <unistd.h>

/**
 * _putchar - Print Character
 * Description: Print character to the stdout using the putc()
 * @c: The character to print.
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
