#include <stdio.h>

/**
 * main - Print Alphabet
 * Description: Print in lowercase using only two putchar() call
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
