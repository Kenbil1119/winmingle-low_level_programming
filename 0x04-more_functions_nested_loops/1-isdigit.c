#include "main.h"

/**
 * _isdigit - Check if the argument pass  is digit
 *
 * @c: Integer parameter to save the integer value of the character
 *
 * Return: 1 if it is a digit(0 - 9) else return 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
