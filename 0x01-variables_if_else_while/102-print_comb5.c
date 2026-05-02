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
	int a, b, i, j;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (i = 0; i <= 9; i++)
			{
				while (j )
				{
					if (a == b)
						if (i == a == j)
							con
					if (i > j)
						continue;
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
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
		}
	}

	return (0);
}
