#include <stdio.h>
#include "main.h"

/**
 * main - Print "_putchar"
 * Description: Print "_putchar" using "_putchar()"
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */
int main(void)
{
	char *ch = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);

	return (0);
}
