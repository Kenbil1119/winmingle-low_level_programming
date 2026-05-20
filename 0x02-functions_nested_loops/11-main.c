#include "main.h"

/**
 * main - Test add()
 * Description: Invoke add() function to do addition of two integer numbers
 *
 * Return: 0
 *
 * Author: Usman Saheed
 */

int main(void)
{
	int num[5] = {98, -1024, 0, 88, 124}, i;

	for (i = 0; i < 5; i++)
	{
		printf("From %d to 98:\n", num[i]);
		print_to_98(num[i]);
		_putchar('\n');
	}

	return (0);
}
