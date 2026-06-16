#include "main.h"

/**
 * _putchar - Print Character
 * Description: Print character to the stdout using the putc()
 * @c: Character parameter.
 *
 * Return: 1 if success
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
