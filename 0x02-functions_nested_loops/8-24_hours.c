#include "main.h"

/**
 * jack_bauer - Print Minutes
 * Description: Function prints every minutes of 24 hours.
 *
 * Return: Nothing
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void jack_bauer(void)
{
	int h1 = 0, h2 = 0, m1, m2 = 0;

	while (h2 <= 2)
	{
		for (h1 = 0; h1 <= 9; h1++)
		/*while (h1 <= 9)*/
		{
			if (h2 == 2 && h1 == 4)
				break;
			for (m2 = 0; m2 < 6; m2++)
			{
				for (m1 = 0; m1 <= 9; m1++)
				{
					_putchar(h2 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(m1 + '0');

					_putchar('\n');
				}
			}
			/*Uncomment if while loop is used for h1*/
			/*h1++;*/
		}
		/*h1 = 0;*/
		h2++;
	}
}
