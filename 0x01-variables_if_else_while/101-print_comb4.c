#include <stdio.h>

/**
 * main - Print three digits numbers
 * Description: Print all possible single combinations of three digits
 *	(No repetition of combination, e.g. 001, 010, 100)
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
			{
				if (i >= j || j >= k)
					continue;
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (k != 9)
				{
					putchar (',');
					putchar (' ');
				}
				else
					putchar(10);
			}
	return (0);
}
