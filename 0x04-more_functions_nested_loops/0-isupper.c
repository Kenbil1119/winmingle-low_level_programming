#include "main.h"

/**
 * _isupper - Check if the letter is uppercase
 *
 * @c: Integer parameter to save the integer value of the character
 *
 * Return: 1 if it is an uppercase else return 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
