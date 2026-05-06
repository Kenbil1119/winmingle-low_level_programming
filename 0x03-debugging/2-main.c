#include "main.h"

/**
 * main - prints the largest of three numbers
 *
 * Description: Invoke largest_number() and print the largest of three numbers
 *
 * Return: largest number (largest)
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */
int main(void)
{
	int a = 98, b = -1024, c = 972;

	printf("%d is the largest number", largest_number(a, b, c));

	return (0);
}
