#include "main.h"

int check_sqrt(int n, int root);

/**
 * _sqrt_recursion - Program to check the perfect
 *		square root of a number.
 *
 * @n: Integer Parameter that read the number to find
 *		it perfect square root
 *
 * Return: The perfect root of 'n',
 *	1, if n is 1,
 *	0, if n equal 0,
 *	-1 if n is less than 0 or not a perfect square root.
 *
 * Author: Usman Saheed .K
 * Program: WinMingle Community C Training.
 */

int _sqrt_recursion(int n)
{
	int initial_root;

	initial_root = n / 2;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (check_sqrt(n, initial_root));
}

/**
 * check_sqrt - Program to check for the perfect root of "n"
 *
 * @n: Integer parameter to find if it has perfect root
 * @root: Integer parameter to save new root in checkings
 *
 * Return: -1, if root check is less than 1
 *	returns "root" value, if perfect root is find.
 */

int check_sqrt(int n, int root)
{
	if (root < 2)
		return (-1);
	if (root * root == n)
		return (root);
	return (check_sqrt(n, root - 1));
}
