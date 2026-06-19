#include "main.h"

/**
 * _print_rev_recursion - Print the reverse of a string using recursion
 *
 * @s: Pointer to the string
 *
 * Author: Usman Saheed
 * Program: WimMingle Community C Training
 */

void _print_rev_recursion(char *s)
{

	if (s == NULL)
		return;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
