#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print numbers from 0 to 9
 * Description: Print all single digit numbers of base 10 from 0
 *		using putchar() call with integer type
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
