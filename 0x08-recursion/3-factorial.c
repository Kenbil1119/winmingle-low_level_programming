#include "main.h"

/**
 * factorial - Compute the factorial of a number
 *
 * @n: The number
 *
 * Return: The factorial of the number, else 1 if the numberis zero.
 *		-1 if the number is less than zero.
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	if (n == 0)
		return (1);
	else
		return (-1);
}
