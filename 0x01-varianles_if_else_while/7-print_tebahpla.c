#include <stdio.h>

/**
 * main - Print alphabet
 * Description: Print alphabet in lowercase
 *		and in reverse order,  from 'z' to 'a'
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
