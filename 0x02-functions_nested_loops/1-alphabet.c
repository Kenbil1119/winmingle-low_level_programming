#include "main.h"

/**
 * print_alphabet - Print Alphabet
 * Description: Print in lowercase using only two _putchar() call
 *
 * Return: void
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
