#include <stdio.h>

/**
 * main - Print numbers from 0 to 9
 * Description: Print all single digit numbers using only two putchar() call
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
