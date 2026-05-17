#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void more_numbers(void)
{
        int num, i = 1;
        
	while (i <= 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
				_putchar(num + '0');
		}
		_putchar('\n');
		i++;
	}
}
