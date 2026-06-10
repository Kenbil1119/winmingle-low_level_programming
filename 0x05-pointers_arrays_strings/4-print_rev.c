#include "main.h"

/**
 * print_rev - Print the reverse of a string
 *
 * @s: Pointer to the string
 *
 * Author: Usman Saheed
 * Program: WimMingle Community C Training
 */

void print_rev(char *s)
{
	int i;
	long length = 0;

	if (s == NULL)
		return;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = length; i >= 0; i--)
		_putchar(s[i]);
}
