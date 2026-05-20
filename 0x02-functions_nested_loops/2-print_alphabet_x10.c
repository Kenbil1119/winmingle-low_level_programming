#include "main.h"

/**
 * print_alphabet_x10 - Print Alphabet
 * Description: Print in lowercase 10 times, using only two _putchar() call
 *
 * Return: void
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
