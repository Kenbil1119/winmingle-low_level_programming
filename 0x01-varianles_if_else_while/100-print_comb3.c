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
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i > j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			
			if (j != 9)
			{
				putchar (',');
				putchar (' ');
			}
			else
				putchar(10);
		}
	}

	return (0);
}
