#include "main.h"

/**
 * _abs - Return Absolute value of a number
 * Description: Check and convert if number is negative value
 *		and return positive value.
 *
 * @num: Integer parameter for the number.
 *
 * Return: absolute value of a number
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
