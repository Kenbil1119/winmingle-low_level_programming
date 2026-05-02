#include <stdio.h>

/**
 * main - Print Hexadecimal number
 * Description: Print Hexadecimal
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int i;
	
	for (i = 0; i < 16; i++)
	{
		if (i <= 9)
			putchar (i + '0');
		else
			putchar((i - 10) + 'a');
	}
	putchar ('\n');

	return (0);
}
