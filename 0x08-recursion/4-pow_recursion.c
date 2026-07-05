#include "main.h"

/**
 * _pow_recursion - Compute x to the power of y
 *
 * @x: The base number
 * @y: The power
 *
 * Return: The result of x^y else,
 *	1, if y == 0,
 *	or -1, if y < 0.
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	
	return (x * _pow_recursion(x, y - 1));
}
