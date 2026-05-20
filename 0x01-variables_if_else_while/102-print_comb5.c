#include <stdio.h>

/**
 * main - Print two digits numbers
 * Description: Print all possible of single combination of two digits numbers
 *	(No Repetition of combination, e.g. 01, 10)
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 9 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
