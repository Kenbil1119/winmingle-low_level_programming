#include <stdio.h>

/**
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 * Description: This program prints each character (elements) of 'str' and
 *		a newline to the stdout using 'putchar()'
 *
 * Return: 0 if successful
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	for (i = 0; str[i] != 0; i++)
		putchar(str[i]);
	putchar('\n');

	return (0);
}

